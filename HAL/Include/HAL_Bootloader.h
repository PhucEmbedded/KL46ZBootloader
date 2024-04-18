/*
 * HAL_Bootloader.h
 *
 *  Created on: Apr 10, 2024
 *      Author: phucl
 */

#ifndef SOURCES_HAL_INCLUDE_HAL_BOOTLOADER_H_
#define SOURCES_HAL_INCLUDE_HAL_BOOTLOADER_H_

#include <MKL46Z4.h>

void HAL_vector_Table(SCB_Type* scb, uint32_t use_app);


void HAL_Stack_Pointer(uint32_t vector_Table);

#endif /* SOURCES_HAL_INCLUDE_HAL_BOOTLOADER_H_ */
