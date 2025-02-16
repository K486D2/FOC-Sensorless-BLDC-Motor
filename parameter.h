/*
 * parameter.h
 *
 *  Created on: Aug 5, 2024
 *      Author: dell
 */

#ifndef PARAMETER_H_
#define PARAMETER_H_
#include "math.h"


#define IsqRef_OPENLOOP (float)0.3
#define END_SPEED_RADS_PER_SEC_ELEC_IN_LOOPTIME (float)((float)((float)(((float)(500)/60.0f)*(float)(2.0f*3.141592))*(float)1.0f)*(float)0.00005)
#define SpeedRef (float)((float)((float)(((float)(1000)/60.0f)*(float)(2.0f*3.141592))*(float)1.0f))
#define sqrt_2 ((float)1.41421)
#define sqrt_3 ((float)1.73205)
#define one_on_sqrt_2 ((float)0.7071)
#define one_on_sqrt_3 ((float)0.57735)
#define PI ((float)3.141592)
#define VDC 24
#define Polepairs 1
#define PWM_FREQ (float)(20000.0)
#define Ts (float)(1/20000)
#define Ls ((float)0.00234)
#define Rs ((float)3.234)
#define CHEB_SIN_1 (float)0.999978675
#define CHEB_SIN_3 (float)-0.1664971
#define CHEB_SIN_5 (float)0.00799224
#define currentObserver_gain (float)(8000.0)
#define boundary_I (float)0.5
#define bemfObserver_gain (float)(-1000.0)
#define current_OPAMP 20
#define shunt_resistor 0.05
#define max_motor_current 3.5
#define CURRENT_OFFSET_MAX 1482
#define CURRENT_OFFSET_MIN 1384
#define MOVING_AVG_WINDOW_SIZE 18


#endif /* PARAMETER_H_ */
