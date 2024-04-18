/*
 * HAL_GPIO.h
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#ifndef SOURCES_HAL_INCLUDE_HAL_GPIO_H_
#define SOURCES_HAL_INCLUDE_HAL_GPIO_H_

#include<MKL46Z4.h>

void HAL_GPIO_Config(GPIO_Type* gpio,  uint32_t pin);

void HAL_GPIO_Config_Direct_Input(GPIO_Type* gpio, uint32_t pin);

uint32_t HAL_GPIO_Config_Input(GPIO_Type* gpio, uint32_t pin);


void HAL_GPIO_Config_SOR(GPIO_Type* gpio,  uint32_t pin);


void HAL_GPIO_Config_COR(GPIO_Type* gpio, uint32_t pin);

#endif /* SOURCES_HAL_INCLUDE_HAL_GPIO_H_ */
