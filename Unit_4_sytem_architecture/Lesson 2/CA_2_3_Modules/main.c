/*
     File: main.c
     By : Bavly Mansour
*/
#include "CA.h"
#include "US.h"
#include "DC.h"
void setup()
{
    /*
    init all drivers
    init IRQ
    init HAL drivers
    init block
    */
    US_init();
    DC_init();

    //set state pointer to default
    CA_state = STATE(CA_waiting);
    US_state = STATE(US_busy);
    DC_state = STATE(DC_idle);

}

int main ()
{
    setup();
    while (1)
    {
        //call states
        US_state();
        CA_state();
        DC_state();
    }
    return 0;
}
