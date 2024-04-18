/*
 * SRC_Driver_Init.c
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#include<Driver/Include/Driver_Init.h>

void init()
{
	Driver_SIM_Config_LED(SIM);


	Driver_SIM_Config_UART(SIM);


	Driver_Port_Config_TX_UART(PORTA, TX_UART);


	Driver_Port_Config_RX_UART(PORTA, RX_UART);


	Driver_Port_Config_MUX(PORTD, GREEN_PIN);


	Driver_Port_Config_MUX(PORTE, RED_PIN);


	Driver_Port_Config_MUX(PORTC, SW1_PIN);


	Driver_GPIO_Config(GPIOD, GREEN);


	Driver_GPIO_Config(GPIOE, RED);


	Driver_GPIO_Config_Direct_Input(GPIOC, SW1);


	Driver_GPIO_Config_SOR(GPIOD, GREEN);


	Driver_GPIO_Config_SOR(GPIOE, RED);


	Driver_UART_Config_Off(UART0);


	Driver_UART_Config_BDL(UART0, SBR);


	//Driver_UART_Config_C1(UART0, PE);


	Driver_UART_Config_C4(UART0, OSR);


	Driver_UART_Config_C2(UART0, CONTROL2);


	//Driver_UART_Transmiter(str);


	Driver_interrupt(PRIORITY);
}
