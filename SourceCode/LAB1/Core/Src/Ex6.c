/*
 * Ex6.c
 *
 *  Created on: Sep 25, 2024
 *      Author: TIEN DUY
 */

#include "main.h"
#include "Ex3.h"

int TIME;

void Ex6() {
	switch (TIME) {
		case 0:
			PreEx3();
			HAL_GPIO_WritePin(LED_12_YELLOW_GPIO_Port, LED_12_YELLOW_Pin, RESET);
			TIME++;
			break;
		case 1:
			PreEx3();
			HAL_GPIO_WritePin(LED_1_GREEN_GPIO_Port, LED_1_GREEN_Pin, RESET);
			TIME++;
			break;
		case 2:
			PreEx3();
			HAL_GPIO_WritePin(LED_2_RED_GPIO_Port, LED_2_RED_Pin, RESET);
			TIME++;
			break;
		case 3:
			PreEx3();
			HAL_GPIO_WritePin(LED_3_YELLOW_GPIO_Port, LED_3_YELLOW_Pin, RESET);
			TIME++;
			break;
		case 4:
			PreEx3();
			HAL_GPIO_WritePin(LED_4_GREEN_GPIO_Port, LED_4_GREEN_Pin, RESET);
			TIME++;
			break;
		case 5:
			PreEx3();
			HAL_GPIO_WritePin(LED_5_RED_GPIO_Port, LED_5_RED_Pin, RESET);
			TIME++;
			break;
		case 6:
			PreEx3();
			HAL_GPIO_WritePin(LED_6_YELLOW_GPIO_Port, LED_6_YELLOW_Pin, RESET);
			TIME++;
			break;
		case 7:
			PreEx3();
			HAL_GPIO_WritePin(LED_7_GREEN_GPIO_Port, LED_7_GREEN_Pin, RESET);
			TIME++;
			break;
		case 8:
			PreEx3();
			HAL_GPIO_WritePin(LED_8_RED_GPIO_Port, LED_8_RED_Pin, RESET);
			TIME++;
			break;
		case 9:
			PreEx3();
			HAL_GPIO_WritePin(LED_9_YELLOW_GPIO_Port, LED_9_YELLOW_Pin, RESET);
			TIME++;
			break;
		case 10:
			PreEx3();
			HAL_GPIO_WritePin(LED_10_GREEN_GPIO_Port, LED_10_GREEN_Pin, RESET);
			TIME++;
			break;
		case 11:
			PreEx3();
			HAL_GPIO_WritePin(LED_11_RED_GPIO_Port, LED_11_RED_Pin, RESET);
			TIME = 0;
			break;
		default:
			break;
	}
	HAL_Delay(1000);
}
