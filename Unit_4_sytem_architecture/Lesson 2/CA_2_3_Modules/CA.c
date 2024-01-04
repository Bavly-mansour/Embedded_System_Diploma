/*
    File : CA.c
    By Bavly Mansour

*/
#include "CA.h"

int CA_speed = 0;
int CA_distance = 0;
int CA_threshlod = 50;


//pointer to function declaration
void (*CA_state)();


//get the distance from US sensor
void US_get_distance (int distance)
{
    CA_distance = distance ;
    (CA_distance <= CA_threshlod)? (CA_state=STATE(CA_waiting)) : (CA_state = STATE(CA_driving));
    printf ("US ------- distance=%d------->CA \n", CA_distance);
}

STATE_define(CA_waiting)
{
    //state name
    CA_state_id = CA_waiting;
    printf("CA_waiting state : distance=%d , speed= %d  \n", CA_distance, CA_speed);

    //state action
    DC_motor(CA_speed);
}

STATE_define(CA_driving)
{
    //state name
     CA_state_id = CA_driving;
         printf("CA_driving state : distance=%d , speed= %d  \n", CA_distance, CA_speed);

    //state action
    DC_motor(CA_speed);
}
