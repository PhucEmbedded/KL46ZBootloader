/*
 * SRC_Driver_UART.c
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#define NULL (void*)0

#include<Driver/Include/Driver_UART.h>

void Driver_UART_Config_Off(UART0_Type* uart)
{
	HAL_UART_Config_Off(uart);
}


void Driver_UART_Config_BDH(UART0_Type* uart, uint8_t pin)
{
	if((uart == UART0) && ((pin >= 0) || (pin <= 256)))
	{
		HAL_UART_Config_BDH(uart, pin);
	}
	else
	{

	}
}


void Driver_UART_Config_BDL(UART0_Type* uart, uint8_t pin)
{
	if((uart == UART0) && ((pin >= 0) || (pin <= 256)))
	{
		HAL_UART_Config_BDL(uart, pin);
	}
	else
	{

	}
}


void Driver_UART_Config_C1(UART0_Type* uart, uint8_t pin)
{
	if((uart == UART0) && ((pin >= 0) || (pin <= 1)))
	{
		HAL_UART_Config_C1(uart, pin);
	}
	else
	{

	}
}

void Driver_UART_Config_C4(UART0_Type* uart, uint8_t pin)
{
	if((uart == UART0) && ((pin >= 0) || (pin <= 1)))
	{
		HAL_UART_Config_C4(uart, pin);
	}
	else
	{

	}
}

void Driver_UART_Config_C2(UART0_Type* uart, uint8_t pin)
{
	if((uart == UART0) && ((pin >= 0) || (pin <= 1)))
	{
		HAL_UART_Config_C2(uart, pin);
	}
	else
	{

	}
}

void Driver_UART_Transmiter(uint8_t str)
{
	HAL_UART_Transmiter(str);

}


#include <stdint.h>

uint8_t Driver_UART_Receive()
{
    return HAL_UART_Receive();
}

void Driver_interrupt(uint8_t priority)
{
	HAL_interrupt(priority);
}
