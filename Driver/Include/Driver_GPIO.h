/*
 * Driver_GPIO.c
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_GPIO_C_
#define SOURCES_DRIVER_INCLUDE_DRIVER_GPIO_C_

#include<HAL/Include/HAL_GPIO.h>

void Driver_GPIO_Config(GPIO_Type* gpio, uint32_t pin);



void Driver_GPIO_Config_Direct_Input(GPIO_Type* gpio, uint32_t pin);



uint32_t Driver_GPIO_Config_Input(GPIO_Type* gpio, uint32_t pin);



void Driver_GPIO_Config_SOR(GPIO_Type* gpio, uint32_t pin);



void Driver_GPIO_Config_COR(GPIO_Type* gpio, uint32_t pin);

#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_GPIO_C_ */
