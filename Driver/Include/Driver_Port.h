/*
 * Driver_Port.c
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_PORT_C_
#define SOURCES_DRIVER_INCLUDE_DRIVER_PORT_C_

#include<HAL/Include/HAL_Port.h>

void Driver_Port_Config_TX_UART(PORT_Type* port,uint8_t pin);



void Driver_Port_Config_RX_UART(PORT_Type* port,uint8_t pin);



void Driver_Port_Config_MUX(PORT_Type* port,uint8_t pin);

#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_PORT_C_ */
