/*
 * software_timer.h
 *
 *  Created on: Oct 8, 2024
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include"main.h"

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void run_exercise2_1();
void run_exercise2_2();

void timerRun();
#endif /* INC_SOFTWARE_TIMER_H_ */
