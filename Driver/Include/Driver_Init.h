/*
 * Driver_Init.h
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_INIT_H_
#define SOURCES_DRIVER_INCLUDE_DRIVER_INIT_H_

#include<Driver/Include/Driver_GPIO.h>
#include<Driver/Include/Driver_Port.h>
#include<Driver/Include/Driver_SIM.h>
#include<Driver/Include/Driver_UART.h>

#define UART0_PIN1 1
#define UART0_PIN2 2
#define RED_PIN 29
#define GREEN_PIN 5
#define SW1_PIN 3
#define RED 0x20000000U
#define GREEN 0x20U
#define SW1 0x8U
#define TX_UART 2U
#define RX_UART 1U
#define SBR 136
#define OSR 0xFU
#define PE 1U
#define CONTROL2 1U
#define PRIORITY 0

void init();

#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_INIT_H_ */
