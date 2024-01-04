/*
    File : US.c
    By : Bavly Mansour
*/
#include "US.h"
#include "state.h"

extern void (*US_state)();

//module variables :

unsigned int distance ;

//function to generate the distance between 45 and 55
int generate_random (int l, int r, int count)
{
    int i ;
    for (i =0 ; i < count ; i++)
    {
        int random_number = (rand() % (r-l +1)) +l ;
        return random_number;
    }
}

void US_init()
{
    //init UltraSonic sensor
    printf ("DC_init \n");

}

STATE_define(US_busy)
{
   //state action
   US_state_id = US_busy ;

   //read from US
   distance = generate_random (45 , 55 , 1);
   printf ("US_busy state : distance =%d \n", distance);


   US_get_distance(distance);
   US_state = STATE(US_busy);

}

