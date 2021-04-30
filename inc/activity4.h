/**
 * @file activity4.h
 * @author Annappa (annappa211@gmail.com)
 * @brief activity4-header file
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

/**
 * @brief Function to initialize USART
 * 
 * @param ubrr_value 
 */
void USARTInit(uint16_t ubrr_value);

/**
 * @brief Function to send the the modified temperature value to USART
 * 
 * @param temp_value 
 */
void USARTWrite(char temp_value);

/**
 * @brief Function to display the temperature value on the serial monitor screen
 * 
 * @return char 
 */
char temp_disp();
#endif // ACTIVITY4_H_INCLUDED
