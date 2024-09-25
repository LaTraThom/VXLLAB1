/*
 * Ex5.c
 *
 *  Created on: Sep 25, 2024
 *      Author: TIEN DUY
 */

#include "main.h"
#include "Ex3.h"
#include "Ex4.h"

#define RED_ON 0
#define YELLOW_ON 1
#define GREEN_ON 2

static int COUNT = 5;
int STATUS;
void Ex5() {
	PreEx3();
	switch (STATUS) {
		case RED_ON:
			display7SEG(COUNT);
			if (COUNT >= 3) {
				HAL_GPIO_WritePin(LED_11_RED_GPIO_Port, LED_11_RED_Pin, RESET);
				HAL_GPIO_WritePin(LED_5_RED_GPIO_Port, LED_5_RED_Pin, RESET);
				HAL_GPIO_WritePin(LED_10_GREEN_GPIO_Port, LED_10_GREEN_Pin, RESET);
				HAL_GPIO_WritePin(LED_4_GREEN_GPIO_Port, LED_4_GREEN_Pin, RESET);
			}
			if (COUNT >= 0 && COUNT <= 2) {
				HAL_GPIO_WritePin(LED_10_GREEN_GPIO_Port, LED_10_GREEN_Pin, SET);
				HAL_GPIO_WritePin(LED_4_GREEN_GPIO_Port, LED_4_GREEN_Pin, SET);
				HAL_GPIO_WritePin(LED_9_YELLOW_GPIO_Port, LED_9_YELLOW_Pin, RESET);
				HAL_GPIO_WritePin(LED_3_YELLOW_GPIO_Port, LED_3_YELLOW_Pin, RESET);
				HAL_GPIO_WritePin(LED_11_RED_GPIO_Port, LED_11_RED_Pin, RESET);
				HAL_GPIO_WritePin(LED_5_RED_GPIO_Port, LED_5_RED_Pin, RESET);
			}
			COUNT--;
			if (COUNT < 0) {
				STATUS = GREEN_ON;
				COUNT = 3;
			}
			HAL_Delay(1000);
			break;

		case GREEN_ON:
			display7SEG(COUNT);
			if (COUNT >= 0) {
				HAL_GPIO_WritePin(LED_11_RED_GPIO_Port, LED_11_RED_Pin, SET);
				HAL_GPIO_WritePin(LED_5_RED_GPIO_Port, LED_5_RED_Pin, SET);
				HAL_GPIO_WritePin(LED_9_YELLOW_GPIO_Port, LED_9_YELLOW_Pin, SET);
				HAL_GPIO_WritePin(LED_3_YELLOW_GPIO_Port, LED_3_YELLOW_Pin, SET);
				HAL_GPIO_WritePin(LED_1_GREEN_GPIO_Port, LED_1_GREEN_Pin, RESET);
				HAL_GPIO_WritePin(LED_7_GREEN_GPIO_Port, LED_7_GREEN_Pin, RESET);
				HAL_GPIO_WritePin(LED_8_RED_GPIO_Port, LED_8_RED_Pin, RESET);
				HAL_GPIO_WritePin(LED_2_RED_GPIO_Port, LED_2_RED_Pin, RESET);
				}
			COUNT--;
			if (COUNT < 0) {
				STATUS = YELLOW_ON;
				COUNT = 2;
			}
			HAL_Delay(1000);
			break;

		case YELLOW_ON:
			display7SEG(COUNT);
			if (COUNT >= 0) {
				HAL_GPIO_WritePin(LED_1_GREEN_GPIO_Port, LED_1_GREEN_Pin, SET);
				HAL_GPIO_WritePin(LED_7_GREEN_GPIO_Port, LED_7_GREEN_Pin, SET);
				HAL_GPIO_WritePin(LED_8_RED_GPIO_Port, LED_8_RED_Pin, RESET);
				HAL_GPIO_WritePin(LED_2_RED_GPIO_Port, LED_2_RED_Pin, RESET);
				HAL_GPIO_WritePin(LED_12_YELLOW_GPIO_Port, LED_12_YELLOW_Pin, RESET);
				HAL_GPIO_WritePin(LED_6_YELLOW_GPIO_Port, LED_6_YELLOW_Pin, RESET);
			}
			COUNT--;
			if (COUNT < 0) {
				STATUS = RED_ON;
				COUNT = 5;
			}
			HAL_Delay(1000);
			break;
		default:
			break;
	}
}
