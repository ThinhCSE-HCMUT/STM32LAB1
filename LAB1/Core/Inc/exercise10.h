/*
 * exercise10.h
 *
 *  Created on: Sep 13, 2024
 *      Author: Admin
 */

#ifndef INC_EXERCISE10_H_
#define INC_EXERCISE10_H_
#include "main.h"

void clearAllClock();
void setNumberOnClock(int num);  //turn on at LED pin
void clearNumberOnClock(int num); //turn off at LED pin
void clockwiseMovement(int hour, int minute, int sec);
void displaySec(int *sec, int* pinLED_sec, int* pinLED_min, int* pinLED_hour, int* cycle_sec);
void displayMin(int* sec, int* minute, int*pinLED_sec, int* pinLED_min, int* pinLED_hour, int* cycle_sec);
void displayHour(int* sec, int* minute, int* hour, int* pinLED_sec, int* pinLED_min, int* pinLED_hour, int* cycle_sec);
#endif /* INC_EXERCISE10_H_ */
