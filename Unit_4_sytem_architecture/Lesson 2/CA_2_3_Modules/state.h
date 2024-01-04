/*
    File : state.h
    By : Bavly Mansour
*/
#ifndef STATE_H_
#define STATE_H_

#define STATE_define(_stateFUN_) void ST_##_stateFUN_()

#define STATE(_stateFUN_) ST_##_stateFUN_

#include <stdio.h>
#include <stdlib.h>

//state connection
US_distance_set(int d);
DC_motor(int s);


#endif // STATE_H_
