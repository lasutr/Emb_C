/**
 * @file activity3.c
 * @author Annappa M (annappa211@gmail.com)
 * @brief Generate the PWM signals and visualise it in CRO
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>

#include "activity3.h"
#include "activity2.h"

/**
 * @brief Function to initialize timer registers
 * 
 */
void config_timer()
{
     TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B|=(1<<CS11)|(1<<WGM12)|(1<<CS10);
    DDRB|=(1<<PB1);
}

/**
 * @brief Function to produce duty cycle in PWM according to input ADC value
 * 
 */
void pwm_output(void)
{

    if((ReadADC(0)>=0) && (ReadADC(0)<=209)){

        OCR1A = 205; //20% duty cycle
        _delay_ms(20);
    }
    else if((ReadADC(0)>=210) && (ReadADC(0)<=509)){

        OCR1A = 410; //40% duty cycle
        _delay_ms(20);
    }
    else if((ReadADC(0)>=510) && (ReadADC(0)<=709)){

        OCR1A = 717;//70% duty cycle
        _delay_ms(20);
    }
    else if((ReadADC(0)>=710) && (ReadADC(0)<=1024)){

        OCR1A = 973; //95% duty cycle
        _delay_ms(20);
    }
    else
    {
        OCR1A = 0; //0% output
    }

}
