/*
 * Ex10.c
 *
 *  Created on: Sep 25, 2024
 *      Author: TIEN DUY
 */

#include "main.h"
#include "Ex7.h"
#include "Ex8.h"
#include "Ex9.h"

int second;
int minute;
int hour;

 void Ex10() {
	clearAllClock();
	setNumberOnClock(second / 5);
	setNumberOnClock(minute / 5);
	setNumberOnClock(hour);
	second++;
	if (second > 59) {
		second = 0;
		minute++;
	}
	if (minute > 59) {
		minute = 0;
		hour++;
	}
	if (hour > 12) {
		hour = 0;
	}

	HAL_Delay(1000);

 }

