/*
 * SRC_HAL_UART.c
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#include<HAL/Include/HAL_UART.h>

void HAL_UART_Config_Off(UART0_Type* uart)
{
	uart->C2 &= ~UART0_C2_TE_MASK;
	uart->C2 &= ~UART0_C2_RE_MASK;
}

void HAL_UART_Config_BDH(UART0_Type* uart, uint8_t pin)
{
	uart->BDH &= ~UART_BDH_SBR_MASK;
	uart->BDH |= UART_BDH_SBR(pin);
}

void HAL_UART_Config_BDL(UART0_Type* uart, uint8_t pin)
{
	uart->BDL &= ~UART0_BDL_SBR_MASK;
	uart->BDL |= UART0_BDL_SBR(pin);
}

void HAL_UART_Config_C1(UART0_Type* uart, uint8_t pin)
{
	uart->C1 |= UART0_C1_PE(pin);
}

void HAL_UART_Config_C4(UART0_Type* uart, uint8_t pin)
{
	uart->C4 |= UART0_C4_OSR(pin);
}

void HAL_UART_Config_C2(UART0_Type* uart, uint8_t pin)
{
	uart->C2 |= UART0_C2_RIE(pin);
	uart->C2 |= UART0_C2_TE(pin);
	uart->C2 |= UART0_C2_RE(pin);
}

void HAL_UART_Transmiter(uint8_t str)
{
	while((UART0->S1 & UART0_S1_TDRE_MASK))
	{

	}
	UART0->D = str;
}

uint8_t HAL_UART_Receive()
{
	return UART0->D;
}

void HAL_interrupt(uint8_t priority)
{
	NVIC_SetPriority(UART0_IRQn, priority);
	NVIC_EnableIRQ(UART0_IRQn);
}
