/*
 * SRC_HAL_SIM.c
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#include<HAL/Include/HAL_SIM.h>

void HAL_SIM_Config_LED(SIM_Type* sim)
{
	sim->SCGC5 |= SIM_SCGC5_PORTD(1);
	sim->SCGC5 |= SIM_SCGC5_PORTE(1);
	sim->SCGC5 |= SIM_SCGC5_PORTC(1);
}

void HAL_SIM_Config_UART(SIM_Type* sim)
{
	sim->SCGC4 |= SIM_SCGC4_UART0(1);
	sim->SOPT2 |= SIM_SOPT2_UART0SRC(1);
	sim->SCGC5 |= SIM_SCGC5_PORTA(1);
}
