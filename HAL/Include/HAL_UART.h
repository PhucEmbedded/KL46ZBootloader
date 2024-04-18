/*
 * HAL_UART.h
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#ifndef SOURCES_HAL_INCLUDE_HAL_UART_H_
#define SOURCES_HAL_INCLUDE_HAL_UART_H_

#include<MKL46Z4.h>

void HAL_UART_Config_Off(UART0_Type* uart);


void HAL_UART_Config_BDH(UART0_Type* uart, uint8_t pin);


void HAL_UART_Config_BDL(UART0_Type* uart, uint8_t pin);


void HAL_UART_Config_C1(UART0_Type* uart, uint8_t pin);


void HAL_UART_Config_C4(UART0_Type* uart, uint8_t pin);


void HAL_UART_Config_C2(UART0_Type* uart, uint8_t pin);


void HAL_UART_Transmiter(uint8_t str);


uint8_t HAL_UART_Receive();

void HAL_interrupt(uint8_t priority);

#endif /* SOURCES_HAL_INCLUDE_HAL_UART_H_ */
