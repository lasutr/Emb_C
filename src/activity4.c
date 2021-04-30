/**
 * @file activity4.c
 * @author Annappa M (annappa211@gmail.com)
 * @brief Dsiplay the value of temperature on the serial monitor
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

/**
 * @brief Function to initialize USART
 * 
 * @param ubrr_value 
 */
void USARTInit(uint16_t ubrr_value)
{
    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ01);
    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

/**
 * @brief Function to send the the modified temperature value to USART
 * 
 * @param temp_value 
 */
void USARTWrite(char temp_value)
{
  while(!(UCSR0A & (1<<UDRE0)))
  { }
UDR0 = temp_value;
}

/**
 * @brief Function to display the temperature value on the serial monitor screen
 * 
 * @return char 
 */
char temp_disp()
{
    char temperature;

     if((ReadADC(0)>=0) && (ReadADC(0)<=209)){

       temperature= 20;
    }
    else if((ReadADC(0)>=210) && (ReadADC(0)<=509)){

        temperature= 25;
    }
    else if((ReadADC(0)>=510) && (ReadADC(0)<=709)){

        temperature= 29;
    }
    else if((ReadADC(0)>=710) && (ReadADC(0)<=1024)){

        temperature= 33;
    }
    else
    {
        temperature= 0;
    }
    return temperature;
}
