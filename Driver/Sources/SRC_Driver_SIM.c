/*
 * SRC_Driver_SIM.c
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#include<Driver/Include/Driver_SIM.h>

void Driver_SIM_Config_LED(SIM_Type* sim)
{
	if(sim == SIM)
	{
		HAL_SIM_Config_LED(sim);
	}
	else
	{

	}
}


void Driver_SIM_Config_UART(SIM_Type* sim)
{
	if(sim == SIM)
	{
		HAL_SIM_Config_UART(sim);
	}
	else
	{

	}
}
