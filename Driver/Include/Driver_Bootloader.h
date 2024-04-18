/*
 * Driver_Bootloader.h
 *
 *  Created on: Apr 10, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_BOOTLOADER_H_
#define SOURCES_DRIVER_INCLUDE_DRIVER_BOOTLOADER_H_

#include "HAL/Include/HAL_Bootloader.h"

void Driver_vector_Table(SCB_Type* scb, uint32_t use_app);


void Driver_Stack_Pointer(uint32_t vector_Table);

#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_BOOTLOADER_H_ */
