/**
 * @file activity1.c
 * @author Annappa M (annappa211@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "activity1.h"

void initialise()//TO INITIALISE PORTS
{
    DDRB|=(1<<PB0);//TO MAKE B0 AS AN OUTPUT PIN
    DDRD&=~(3<<PD0);//TO MAKE Do and D1  AS AN INPUT PIN
    PORTD|=(3<<PD0);//PULL UP
  
}
