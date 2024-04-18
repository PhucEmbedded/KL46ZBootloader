/*
 * HAL_SIM.h
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#ifndef SOURCES_HAL_INCLUDE_HAL_SIM_H_
#define SOURCES_HAL_INCLUDE_HAL_SIM_H_

#include<MKL46Z4.h>

void HAL_SIM_Config_LED(SIM_Type* sim);


void HAL_SIM_Config_UART(SIM_Type* sim);

#endif /* SOURCES_HAL_INCLUDE_HAL_SIM_H_ */
