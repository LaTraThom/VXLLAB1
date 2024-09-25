/*
 * Ex8.c
 *
 *  Created on: Sep 25, 2024
 *      Author: TIEN DUY
 */

#include "main.h"

void setNumberOnClock(int num) {
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(LED_12_YELLOW_GPIO_Port, LED_12_YELLOW_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_1_GREEN_GPIO_Port, LED_1_GREEN_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_2_RED_GPIO_Port, LED_2_RED_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_3_YELLOW_GPIO_Port, LED_3_YELLOW_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_4_GREEN_GPIO_Port, LED_4_GREEN_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_5_RED_GPIO_Port, LED_5_RED_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_6_YELLOW_GPIO_Port, LED_6_YELLOW_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_7_GREEN_GPIO_Port, LED_7_GREEN_Pin, RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_8_RED_GPIO_Port, LED_8_RED_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_9_YELLOW_GPIO_Port, LED_9_YELLOW_Pin, RESET);
			break;
		case 10:
			HAL_GPIO_WritePin(LED_10_GREEN_GPIO_Port, LED_10_GREEN_Pin, RESET);
			break;
		case 11:
			HAL_GPIO_WritePin(LED_11_RED_GPIO_Port, LED_11_RED_Pin, RESET);
			break;
		default:
			break;
	}
}
