/*
 * Ex2.c
 *
 *  Created on: Sep 25, 2024
 *      Author: TIEN DUY
 */

#include "Ex2.h"
#include "main.h"

#define RED_ON 0
#define YELLOW_ON 1
#define GREEN_ON 2

static int COUNT = 0;
int STATUS;
void Ex2() {
	switch (STATUS) {
	case RED_ON:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		COUNT++;
		if (COUNT > 5) {
			STATUS = GREEN_ON;
			COUNT = 0;
		}
		break;
	case YELLOW_ON:
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		COUNT++;
		if (COUNT > 2) {
			STATUS = RED_ON;
			COUNT = 0;
		}
		break;
	case GREEN_ON:
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
		COUNT++;
		if (COUNT > 3) {
			STATUS = YELLOW_ON;
			COUNT = 0;
		}
		break;
	default:
		break;
	}

	HAL_Delay(1000);
}

