/*
 * software_timer.h
 *
 *  Created on: Oct 8, 2024
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"

extern int timer0_flag;
void setTimer0 ( int duration );
void timer_run ();

#endif /* INC_SOFTWARE_TIMER_H_ */
