/*
 * software_timer.h
 *
 *  Created on: Oct 8, 2024
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"
#define MAX_LED 4

extern int hour, minute, second;
void updateClockBuffer();
void setTimeronClock();

extern int index_led;
extern int led_buffer[];

void display7SEG(int num);
void update7SEG(int index);

void setTimer1(int duration);
extern int timer1_flag;

void setTimer2(int duration);
extern int timer2_flag;

void setTimer3(int duration);
extern int timer3_flag;

void timeRun();
#endif /* INC_SOFTWARE_TIMER_H_ */
