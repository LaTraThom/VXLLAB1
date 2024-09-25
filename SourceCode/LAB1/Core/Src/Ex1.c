/*
 * Ex1.c
 *
 *  Created on: Sep 25, 2024
 *      Author: TIEN DUY
 */

#include "Ex1.h"
#include "main.h"

void Ex1() {
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
	HAL_Delay(2000);
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}
