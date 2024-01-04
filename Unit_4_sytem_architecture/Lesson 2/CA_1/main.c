#include "stdio.h"
#include "stdlib.h"
#include "CA.h"
#include "state.h"
void (*CA_state)();
void setup()
{
    printf("Setup \n");
    CA_state = CA_waiting ;


}

int main()
{
    int i = 1;
    printf("main \n");
   // volatile int d;
    setup();
   while (i)
    {
        printf("while 1 \n");
        CA_state();
        i++;
    }
    return 0;
}
