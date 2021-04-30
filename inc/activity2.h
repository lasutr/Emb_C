/**
 * @file activity2.h
 * @author Annappa (annappa211@gmail.com)
 * @brief activity2-header file
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED

/**
 * @brief Function to initialize  registers for ADC setup
 * 
 */
void InitADC();

/**
 * @brief Function to return the ADC values for selected channel
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch);

#endif
