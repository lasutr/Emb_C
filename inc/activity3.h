/**
 * @file activity3.h
 * @author Annappa (annappa211@gmail.com)
 * @brief activity3-header file
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED

/**
 * @brief Function to initialize timer registers
 * 
 */
void config_timer(void);

/**
 * @brief Function to produce duty cycle in PWM according to input ADC value
 * 
 */
void pwm_output(void);

#endif
