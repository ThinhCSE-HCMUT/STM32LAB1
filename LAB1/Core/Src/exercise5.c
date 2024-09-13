/*
 * exercise5.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Admin
 */
#include "exercise5.h"

void display_0(int street)
{
	//a, b, c, d, e, f
	if(street == 1)
	{
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
	}
	else if(street == 2)
	{
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
	}

}
void display_1(int street)
{
	//b, c
	if(street == 1)
	{
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
	}
	else if(street == 2)
	{
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
	}

}
void display_2(int street)
{
	//a, b, d, e, g
	if(street == 1)
	{
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, SET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	}
	else if(street == 2)
	{
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, SET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}

}
void display_3(int street)
{
	//a, b, c, d, g
	if(street == 1)
	{
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	}
	else if(street == 2)
	{
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}

}
void display_4(int street)
{
	//b, c, f, g
	if(street == 1)
	{
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	}
	else if(street == 2)
	{
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}

}
void display_5(int street)
{
	//a, c, d, f, g
	if(street == 1)
	{
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	}
	else if(street == 2)
	{
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}

}
void display_6(int street)
{
	//a, c, d, e, f, g
	if(street == 1)
	{
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	}
	else if(street == 2)
	{
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}

}
void display_7(int street)
{
	//a, b, c
	if(street == 1)
	{
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
	}
	else if(street == 2)
	{
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
	}

}
void display_8(int street)
{
	//a, b, c, d, e, f, g
	if(street == 1)
	{
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	}
	else if(street == 2)
	{
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}

}
void display_9(int street)
{
	//a, b, c, d, f, g
	if(street == 1)
	{
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
	}
	else if(street == 2)
	{
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}

}

void display7SEG(int num, int street)
{
	switch(num)
	{
	case 0:
		display_0(street);
		break;
	case 1:
		display_1(street);
		break;
	case 2:
		display_2(street);
		break;
	case 3:
		display_3(street);
		break;
	case 4:
		display_4(street);
		break;
	case 5:
		display_5(street);
		break;
	case 6:
		display_6(street);
		break;
	case 7:
		display_7(street);
		break;
	case 8:
		display_8(street);
		break;
	case 9:
		display_9(street);
		break;
	default:
		break;

	}
}
void turnOn(int led_status, int street)
{
	switch(street)
	{
	case 1:
		switch(led_status)
		{
		case RED:
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
			break;
		case GREEN:
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
			break;
		case YELLOW:
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
			break;
		default:
			break;
		}
		break;
	case 2:
		switch(led_status)
		{
		case RED:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
			break;
		case GREEN:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
			break;
		case YELLOW:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}


