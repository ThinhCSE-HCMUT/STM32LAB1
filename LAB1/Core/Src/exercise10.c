/*
 * exercise10.c
 *
 *  Created on: Sep 13, 2024
 *      Author: Admin
 */
#include "exercise10.h"

void clearAllClock()
{
	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
}
void setNumberOnClock(int num)
{
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, SET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, SET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, SET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, SET);
		break;
	case 10:
		HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, SET);
		break;
	case 11:
		HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, SET);
		break;
	default:
		break;
	}
}
void clearNumberOnClock(int num)
{
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
		break;
	case 10:
		HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
		break;
	case 11:
		HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
		break;
	default:
		break;
	}
}

void displaySec(int *sec, int* pinLED_sec, int* pinLED_min, int* pinLED_hour, int* cycle_sec)
{
	if(*sec % 5 == 0 && *sec != 0) //Can be replaced with another number in order to debug more easily
	{
		if(*pinLED_sec >= 11)
		{
			if(*pinLED_sec != *pinLED_min && *pinLED_sec != *pinLED_hour) clearNumberOnClock(*pinLED_sec);
			*sec = 0;
			*pinLED_sec = 0;
			setNumberOnClock(*pinLED_sec);
			++*cycle_sec;
		}
		else
		{
			if(*pinLED_sec != *pinLED_min && *pinLED_sec != *pinLED_hour) clearNumberOnClock(*pinLED_sec);
			setNumberOnClock(++*pinLED_sec);
		}

	}
}
void displayMin(int* sec, int* minute, int* pinLED_sec, int* pinLED_min, int* pinLED_hour, int* cycle_sec)
{
	if(*sec == 0 && *cycle_sec != 0)
	{
		++*minute;
		if(*minute % 5 == 0 && *minute != 0)
		{
			if(*pinLED_min >= 11)
			{
				if(*pinLED_min != *pinLED_sec && *pinLED_min != *pinLED_hour) clearNumberOnClock(*pinLED_min);
				*minute = 0;
				*pinLED_min = 0;
				setNumberOnClock(*pinLED_min);
			}
			else
			{
				if(*pinLED_min != *pinLED_sec && *pinLED_min != *pinLED_hour) clearNumberOnClock(*pinLED_min);
				setNumberOnClock(++*pinLED_min);
			}
		}
	}


}
void displayHour(int* sec, int* minute, int* hour, int* pinLED_sec, int* pinLED_min, int* pinLED_hour, int* cycle_sec)
{
	if(*sec == 0 && *minute == 0 && *cycle_sec >= 60)
	{
		++*hour;
		if(*hour != 0)
		{
			if(*pinLED_hour >= 11)
			{
				if(*pinLED_hour != *pinLED_sec && *pinLED_hour != *pinLED_min) clearNumberOnClock(*pinLED_hour);
				*hour = 0;
				*pinLED_hour = 0;
				setNumberOnClock(*pinLED_hour);
			}
			else
			{
				if(*pinLED_hour != *pinLED_sec && *pinLED_hour != *pinLED_min) clearNumberOnClock(*pinLED_hour);
				setNumberOnClock(++*pinLED_hour);
			}
		}
	}
}
