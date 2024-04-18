/*
 * SRC_HAL_Port.c
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#include<HAL/Include/HAL_Port.h>

void HAL_Port_Config_TX_UART(PORT_Type* port, uint8_t pin)
{
	port->PCR[pin] &= ~PORT_PCR_MUX_MASK;
	port->PCR[pin] |= PORT_PCR_MUX(2);
}

void HAL_Port_Config_RX_UART(PORT_Type* port, uint8_t pin)
{
	port->PCR[pin] &= ~PORT_PCR_MUX_MASK;
	port->PCR[pin] |= PORT_PCR_MUX(2);
}

void HAL_Port_Config_MUX(PORT_Type* port, uint8_t pin)
{
	port->PCR[pin] &= ~PORT_PCR_MUX_MASK;
	port->PCR[pin] |= PORT_PCR_MUX(1);
}
