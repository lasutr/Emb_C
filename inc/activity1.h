/**
 * @file activity1.h
 * @author Annappa (annappa211@gmail.com)
 * @brief activity1-header file
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

/**
 * @brief FUNCTION TO INITIALISE PORTS
 * 
 */
void initialise();

/**
 * @brief A macro to Check if seat is occupied
 * 
 */
#define occupied (!(PIND&(3<<PD0)))

#endif
