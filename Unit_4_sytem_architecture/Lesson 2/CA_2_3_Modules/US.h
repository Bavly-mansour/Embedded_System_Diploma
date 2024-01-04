/*
    File : US.h
    By : Bavly Mansour
*/
#ifndef US_H_
#define US_H_
#include "state.h"

enum
{
    US_busy
}US_state_id;

//prototypes
void US_init ();
STATE_define(US_busy);

//global pointer ultrasonic to function
void (*US_state)();



#endif // US_H_INCLUDED
