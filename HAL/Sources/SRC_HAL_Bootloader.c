/*
 * SRC_HAL_Bootloader.c
 *
 *  Created on: Apr 10, 2024
 *      Author: phucl
 */

#include  "HAL/Include/HAL_Bootloader.h"

void HAL_vector_Table(SCB_Type* scb, uint32_t use_app)
{
	scb->VTOR = use_app;
}

void HAL_Stack_Pointer(uint32_t vector_Table)
{
	uint32_t __get_MSP(void) = *(uint32_t*)vector_Table;
}
