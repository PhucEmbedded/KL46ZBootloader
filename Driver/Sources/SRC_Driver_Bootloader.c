/*
 * SRC_Driver_Bootloader.c
 *
 *  Created on: Apr 10, 2024
 *      Author: phucl
 */

#include "Driver/Include/Driver_Bootloader.h"

void Driver_vector_Table(SCB_Type* scb, uint32_t use_app)
{
	if(scb == SCB && (use_app >= 0 && user_app <= 0xFFFFFFFFU))
	{
		 HAL_vector_Table(scb, use_app);
	}
	else
	{

	}
}

void Driver_Stack_Pointer(uint32_t vector_Table)
{
	if((vector_Table >= 0 && vector_Table <= 0xFFFFFFFFU))
	{
		HAL_Stack_Pointer(vector_Table);
	}
	else
	{

	}
}
