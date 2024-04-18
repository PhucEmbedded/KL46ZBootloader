
#include <stdint.h>
#include "Driver/Include/Driver_Init.h"
#include "SREC.h"
#include "FLASH.h"

#define QUEUE_SIZE 4
#define JUMP_USE_APP 0X0000B004U
#define VECTOR_TABLE 0x0000B000U

struct srecLine
{
	uint8_t dataSrec[50];
	uint8_t length;
};

uint8_t start = 0;
uint8_t rear = 0;
uint8_t count = 0;

srecLine srec[QUEUE_SIZE];
static srecLine currentSrec;

volatile uint8_t flag = 0;

volatile uint8_t lineIndex = 0;

typedef uint32_t (*application_reset_handler_t)(void);

application_reset_handler_t application_reset_handler = *(uint32_t*)JUMP_USE_APP;

void jump_Use_App(void)
{
	NVIC_DisableIRQ(UART0_IRQn);
	Driver_vector_Table(SCB, JUMP_USE_APP);
	Driver_Stack_Pointer(VECTOR_TABLE);
	application_reset_handler();
}

void UART_Deinit(void)
{
    UART0->C2 &= ~(UART_C2_TE_MASK | UART_C2_RE_MASK);
    NVIC_DisableIRQ(UART0_IRQn);

    SIM->SCGC4 &= ~SIM_SCGC4_UART0_MASK;
}

void queue(srecLine line)
{
	if(count >= QUEUE_SIZE || (line.dataSrec[1] == '9'))
	{
		UART_Deinit();
		//error();
	}
	else
	{

		srec[rear] = line;
		rear = (rear + 1) % QUEUE_SIZE;
		count++;
	}
}

srecLine dequeue(void)
{
	if(count <= 0)
	{
		//error();
	}
	else
	{
		srecLine line = srec[start];
		start = (start + 1) % QUEUE_SIZE;
		count--;
	}

	return line;
}

void UART0_IRQHandler(void)
{

	uint8_t str = 0;
	str = Driver_UART_Receive();

	/* must pass 1 to the last string to end the string */
	if(str == '\r' || str == '\n')
	{
		queue(currentSrec);
		currentSrec.length = 0;
		flag = 1;
	}
	else
	{
		currentSrec.dataSrec[currentSrec.length++] = str;
	}

}

void processSrec(uint8_t* address, uint8_t* data)
{
	srecLine line = dequeue();

	if(line.length >= 0)
	{
		select_Srec(line);
		address = readAdress();
		readData(data);
		NVIC_DisableIRQ(UART0_IRQn);
		Program_LongWord_8B(address, data);
	}
	else
	{

	}
}


int main(void)
{

    /* Write your code here */
	uint8_t* address = '\0';
	uint8_t data[];

	init();

    /* This for loop should be replaced. By default this loop allows a single stepping. */

	if(Driver_GPIO_Config_Input & SW1)
	{
		while(1)
		{
		    if(flag)
		    {
		    	flag = 0;
		    	de_init(record);
		    	processSrec(address, data);

		    }
		    else
		    {

		    }
		}
	}
	else
	{
		jump_Use_App();
	}


    /* Never leave main */
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////
