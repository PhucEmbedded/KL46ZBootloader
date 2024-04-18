/*
 * HAL_Port.h
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#ifndef SOURCES_HAL_INCLUDE_HAL_PORT_H_
#define SOURCES_HAL_INCLUDE_HAL_PORT_H_

#include<MKL46Z4.h>

void HAL_Port_Config_TX_UART(PORT_Type* port, uint8_t pin);


void HAL_Port_Config_RX_UART(PORT_Type* port, uint8_t pin);


void HAL_Port_Config_MUX(PORT_Type* port, uint8_t pin);

#endif /* SOURCES_HAL_INCLUDE_HAL_PORT_H_ */
