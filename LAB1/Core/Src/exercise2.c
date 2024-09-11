/*
 * exercise2.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Admin
 */

#include "exercise2.h"

int led_status = RED_MODE;
int count = 0;

void red_mode()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}
void yellow_mode()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}
void green_mode()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
}

void ex2_run()
{
	switch(led_status)
	{
	case RED_MODE:
		red_mode();
		count++;
		if(count == 5)
		{
			led_status = GREEN_MODE;
			count = 0;
		}
		break;
	case YELLOW_MODE:
		yellow_mode();
		count++;
		if(count == 2)
		{
			led_status = RED_MODE;
			count = 0;
		}
		break;
	case GREEN_MODE:
		green_mode();
		count++;
		if(count == 3)
		{
			led_status = YELLOW_MODE;
			count = 0;
		}
		break;
	default:
		break;
	}
}
