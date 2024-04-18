/*
 * Driver_UART.h
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_UART_H_
#define SOURCES_DRIVER_INCLUDE_DRIVER_UART_H_

#include<HAL/Include/HAL_UART.h>

void Driver_UART_Config_Off(UART0_Type* uart);


void Driver_UART_Config_BDH(UART0_Type* uart, uint8_t pin);



void Driver_UART_Config_BDL(UART0_Type* uart, uint8_t pin);



void Driver_UART_Config_C1(UART0_Type* uart, uint8_t pin);



void Driver_UART_Config_C4(UART0_Type* uart, uint8_t pin);



void Driver_UART_Config_C2(UART0_Type* uart, uint8_t pin);



void Driver_UART_Transmiter(uint8_t str);



uint8_t Driver_UART_Receive();


void Driver_interrupt(uint8_t priority);


#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_UART_H_ */
