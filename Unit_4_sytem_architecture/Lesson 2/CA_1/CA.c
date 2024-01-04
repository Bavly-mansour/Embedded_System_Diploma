/*
 * 	FILE : CA.c
 *  Created on: Jan 4, 2024
 *      Author: Bavly
 */
#include "CA.h"
#include "state.h"
#include <stdio.h>
#include <stdlib.h>


//variables
int CA_speed =0;
int CA_distance =0;
int CA_threshold = 50;

//state pointer to function
void (*CA_state)();

int US_Get_distance_random (int l, int  r, int count );

STATE_define (CA_waiting)
{
    //state name
    CA_state_id = CA_waiting ;


    //state action
    CA_speed = 0;

    //dc motor (CA_speed)


    //event check
    //US_GET_distance
    CA_distance = US_Get_distance_random (45, 55, 1);
    (CA_distance <= CA_threshold)? (CA_state = STATE (CA_waiting)) : (CA_state = STATE (CA_driving));

    printf("CA_waiting state : distance =%d , speed =%d \n", CA_distance, CA_speed);


}

STATE_define (CA_driving)
{
    //state name
    CA_state_id = CA_driving ;


    //state action
    CA_speed = 30;

    //dc motor (CA_speed)


    //event check
    //US_GET_distance(CA_distance)

    CA_distance = US_Get_distance_random (45, 55, 1);
    (CA_distance <=CA_threshold)? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving));

    printf("CA_waiting state : distance =%d , speed =%d \n", CA_distance, CA_speed);


}

int US_Get_distance_random (int l, int  r, int count )
{
    //auto generate random number
    int i, random_number ;
    for (i= 0 ; i < count ; i++)
    {
        int random_number = (rand() % ( r-l +1 )) +l  ;

    }
  return random_number;

}
