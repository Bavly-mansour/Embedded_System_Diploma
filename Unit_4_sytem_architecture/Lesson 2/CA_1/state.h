/*
 * state.h
 *
 *  Created on: Jan 4, 2024
 *      Author: Bavly
 */

#ifndef STATE_H_
#define STATE_H_

#include "stdio.h"
#include "stdlib.h"

//auto state function generated
//adding ## to identify as variable of the next (ST_variable_stateFUN)


#define STATE_define(_stateFUN_) void ST_##_stateFUN_()
#define STATE(_stateFUN_) ST_##_stateFUN_

//state connections
//US_distance_set(int d);
//DC_motor (int s );



#endif /* STATE_H_ */
