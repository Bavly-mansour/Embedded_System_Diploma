/*
    File : CA.h
    By : Bavly Mansour
*/
#ifndef CA_H_
#define CA_H_

#include "state.h"

enum{
    CA_waiting,
    CA_driving
}CA_state_id;

//prototypes

STATE_define(CA_waiting);
STATE_define(CA_driving);

//global pointer CA to function
extern void (*CA_state)();


#endif // CA_H_
