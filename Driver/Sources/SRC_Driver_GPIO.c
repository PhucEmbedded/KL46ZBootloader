/*
 * SRC_Driver_GPIO.c
 *
 *  Created on: Apr 2, 2024
 *      Author: phucl
 */

#include<Driver/Include/Driver_GPIO.h>

void Driver_GPIO_Config(GPIO_Type* gpio, uint32_t pin)
{
	if(((gpio == GPIOD) || (gpio == GPIOE) || (gpio == GPIOA)) && (pin >= 0x0U) && (pin <= 0xFFFFFFFFU ))
	{
		HAL_GPIO_Config(gpio, pin);
	}
	else
	{

	}
}

void Driver_GPIO_Config_Direct_Input(GPIO_Type* gpio, uint32_t pin)
{
	if(((gpio == GPIOC)) && (pin >= 0x0U) && (pin <= 0xFFFFFFFFU ))
	{
		HAL_GPIO_Config_Direct_Input(gpio, pin);
	}
	else
	{

	}
}

uint32_t Driver_GPIO_Config_Input(GPIO_Type* gpio, uint32_t pin)
{
	if(((gpio == GPIOC)) && (pin >= 0x0U) && (pin <= 0xFFFFFFFFU ))
	{
		HAL_GPIO_Config_Input(gpio, pin);
	}
	else
	{

	}

	return HAL_GPIO_Config_Input(gpio, pin);
}

void Driver_GPIO_Config_SOR(GPIO_Type* gpio, uint32_t pin)
{
	if(((gpio == GPIOD) || (gpio == GPIOE)) && (pin >= 0x0U) && (pin <= 0xFFFFFFFFU ))
	{
		HAL_GPIO_Config_SOR(gpio, pin);
	}
	else
	{

	}
}


void Driver_GPIO_Config_COR(GPIO_Type* gpio, uint32_t pin)
{
	if(((gpio == GPIOD) || (gpio == GPIOE)) && (pin >= 0x0U) && (pin <= 0xFFFFFFFFU ))
	{
		HAL_GPIO_Config_COR(gpio, pin);
	}
	else
	{

	}
}
