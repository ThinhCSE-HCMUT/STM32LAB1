/*
 * exercise3.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Admin
 */
#include "exercise4.h"

void display_0()
{
	//a, b, c, d, e, f
	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
	HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
	HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
	HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
}
void display_1()
{
	//b, c
	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
	HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
	HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
	HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
}
void display_2()
{
	//a, b, d, e, g
	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, SET);
	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
	HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
	HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
	HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
}
void display_3()
{
	//a, b, c, d, g
	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
	HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
	HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
	HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
}
void display_4()
{
	//b, c, f, g
	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
	HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
	HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
	HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
}
void display_5()
{
	//a, c, d, f, g
	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
	HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
	HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
	HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
}
void display_6()
{
	//a, c, d, e, f, g
	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
	HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
	HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
	HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
}
void display_7()
{
	//a, b, c
	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
	HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
	HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
	HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
}
void display_8()
{
	//a, b, c, d, e, f, g
	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
	HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
	HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
	HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
}
void display_9()
{
	//a, b, c, d, f, g
	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
	HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
	HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
	HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
}

void display7SEG(int num)
{
	switch(num)
	{
	case 0:
		display_0();
		break;
	case 1:
		display_1();
		break;
	case 2:
		display_2();
		break;
	case 3:
		display_3();
		break;
	case 4:
		display_4();
		break;
	case 5:
		display_5();
		break;
	case 6:
		display_6();
		break;
	case 7:
		display_7();
		break;
	case 8:
		display_8();
		break;
	case 9:
		display_9();
		break;
	default:
		break;

	}
}

