/*
 * SRC_HAL_GPIO.c
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#include<HAL/Include/HAL_GPIO.h>

void HAL_GPIO_Config(GPIO_Type* gpio, uint32_t pin)
{
	gpio->PDDR |= GPIO_PDDR_PDD(pin);
}

void HAL_GPIO_Config_Direct_Input(GPIO_Type* gpio, uint32_t pin)
{
	gpio->PDDR &= ~GPIO_PDDR_PDD(pin);
}

uint32_t HAL_GPIO_Config_Input(GPIO_Type* gpio, uint32_t pin)
{
	return gpio->PDIR;
}

void HAL_GPIO_Config_SOR(GPIO_Type* gpio, uint32_t pin)
{
	gpio->PSOR |= GPIO_PSOR_PTSO(pin);
}

void HAL_GPIO_Config_COR(GPIO_Type* gpio, uint32_t pin)
{
	gpio->PCOR |= GPIO_PCOR_PTCO(pin);
}
