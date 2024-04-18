/*
 * SRC_Driver_Port.c
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#include<Driver/Include/Driver_Port.h>

void Driver_Port_Config_TX_UART(PORT_Type* port,uint8_t pin)
{
	if((port == PORTA) && ((pin >= 0) | (pin <= 31)))
	{
		HAL_Port_Config_TX_UART(port, pin);
	}
	else
	{

	}
}


void Driver_Port_Config_RX_UART(PORT_Type* port,uint8_t pin)
{
	if((port == PORTA) && ((pin >= 0) | (pin <= 31)))
	{
		HAL_Port_Config_RX_UART(port, pin);
	}
	else
	{

	}
}


void Driver_Port_Config_MUX(PORT_Type* port, uint8_t pin)
{
	if(((port == PORTA) || (port == PORTD) || (port == PORTE))  && ((pin >= 0) || (pin <= 31)))
	{
		HAL_Port_Config_MUX(port, pin);
	}
	else
	{

	}
}
