/*
 * timer.c
 *
 *  Created on: Nov 22, 2022
 *      Author: Acer
 */

#include "timer.h"
#include "Sheduler.h"

int timer1_flag = 0;
int timer2_flag = 0;

int counter1 = 0;
int counter2 = 0;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim ){
	SCH_Update();
	timerRun();
}

void timerRun(){
	if(counter1 > 0){
		counter1--;
		if(counter1 == 0) timer1_flag = 1;
	}
	if(counter2 > 0){
			counter2--;
			if(counter2 == 0) timer2_flag = 1;
	}
}
