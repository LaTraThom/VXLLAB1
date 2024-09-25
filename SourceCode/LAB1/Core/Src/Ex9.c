/*
 * Ex9.c
 *
 *  Created on: Sep 25, 2024
 *      Author: TIEN DUY
 */

#include "main.h"


void clearNumberOnClock(int num) {
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(LED_12_YELLOW_GPIO_Port, LED_12_YELLOW_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_1_GREEN_GPIO_Port, LED_1_GREEN_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_2_RED_GPIO_Port, LED_2_RED_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_3_YELLOW_GPIO_Port, LED_3_YELLOW_Pin, SET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_4_GREEN_GPIO_Port, LED_4_GREEN_Pin, SET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_5_RED_GPIO_Port, LED_5_RED_Pin, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_6_YELLOW_GPIO_Port, LED_6_YELLOW_Pin, SET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_7_GREEN_GPIO_Port, LED_7_GREEN_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_8_RED_GPIO_Port, LED_8_RED_Pin, SET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_9_YELLOW_GPIO_Port, LED_9_YELLOW_Pin, SET);
			break;
		case 10:
			HAL_GPIO_WritePin(LED_10_GREEN_GPIO_Port, LED_10_GREEN_Pin, SET);
			break;
		case 11:
			HAL_GPIO_WritePin(LED_11_RED_GPIO_Port, LED_11_RED_Pin, SET);
			break;
		default:
			break;
	}
	HAL_Delay(1000);
}
