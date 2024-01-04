/*
    File : DC.c
    By Bavly Mansour

*/
#include <stdio.h>
#include <stdlib.h>
#include "state.h"
#include "DC.h"

unsigned int speed ;
void (*DC_state)();

void DC_init()
{
    //init DC
    printf ("DC init \n");

}
DC_motor(int s)
{
    speed = s;
    DC_state = STATE(DC_busy);
    printf ("CA -------> DC \n");
}
STATE_define(DC_idle)
{
    DC_state_id = DC_idle;
    DC_state = STATE(DC_idle);

    printf ("DC_idle state : speed =%d \n", speed);

}

STATE_define(DC_busy)
{
    //state action
    DC_state_id = DC_busy;

    //dc driver
    DC_state = STATE(DC_idle);
    //no toggle action
    printf("DC_busy state : speed=%d \n", speed);


}


