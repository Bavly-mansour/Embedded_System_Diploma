/*

 *  FILE: CA.h
 *  Created on: Jan 4, 2024
 *      Author: Bavly
 */

#ifndef CA_H_
#define CA_H_
#include "stdio.h"
#include "stdlib.h"
#include "state.h"

//define states
enum
{
    CA_waiting,
    CA_driving
} CA_state_id;

//declare states functions

STATE_define(CA_waiting);
STATE_define(CA_driving);


//state pointer to function
extern void (*CA_state)();


#endif /* CA_H_ */
