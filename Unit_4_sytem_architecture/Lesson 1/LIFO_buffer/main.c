#include <stdio.h>
#include <stdlib.h>
#include "lifo.h"
unsigned int buffer1 [5]; // stored in DATA MEMORY

void main()
{
    int i , temp =0 ;
    LIFO_Buf_t uart_lifo , I2C_lifo ;
    //static allocation
    LIFO_init (&uart_lifo , buffer1 , 5);

    //dynamic allocation using malloc()
    unsigned int* buffer2 = (unsigned int*) malloc (5 * sizeof (unsigned int ));

    //casting with unsigned int* = 5 elements * sizeof (element)
    // malloc (5 * 4) = 20Bytes stored in HEAP
    LIFO_init (&I2C_lifo , buffer2 , 5);

    for (i =0 ; i < 5 ; i++){

        if (LIFO_add_Item(&uart_lifo , i) == LIFO_no_error)
            printf (" UART_LIFO add : %d \n" , i);
    }

     for (i =0 ; i < 5 ; i++){

        if (LIFO_get_Item(&uart_lifo ,&temp ) == LIFO_no_error)
            printf ("UART_LIFO get : %d \n " , temp);
    }
    return 0;
}
