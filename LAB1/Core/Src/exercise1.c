/*
 * exercise1.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Admin
 */
#include "exercise1.h"

int led_status = LED_OFF;

void red_status(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
}

void yellow_status(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
}

void ex1_run(){
	switch(led_status){
	case LED_ON:
		yellow_status();
		led_status = LED_OFF;
		break;
	case LED_OFF:
		red_status();
		led_status = LED_ON;
		break;
	default:
		break;
	}
}
