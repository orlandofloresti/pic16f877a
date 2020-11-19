/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
#include <stdio.h>

// RCC macros
#define RCC_BASE_ADDR		0x40021000UL
#define RCC_AHB2_ENR_OFFSET	0x4CUL
#define RCC_AHB2_ENR_ADDR	(RCC_BASE_ADDR + RCC_AHB2_ENR_OFFSET)

int main(void)
{
	// Set RCC_AHB2ENR address
	uint32_t *pRccAhb2Enr = (uint32_t*) RCC_AHB2_ENR_ADDR;

	// Enable GPIOA
	*pRccAhb2Enr |= (1 << 0);

	for(;;);
}
