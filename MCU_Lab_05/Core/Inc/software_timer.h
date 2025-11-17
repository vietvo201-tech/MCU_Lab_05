/*
 * software_timer.h
 *
 *  Created on: Nov 14, 2025
 *      Author: tanvietvo
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

void setTimer(int index, int duration);
int isTimerExpired(int index);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
