#include <stdio.h>
#include <stdlib.h>
#include "fifo.h"
int main()
{
    element_type i , temp =0;
    FIFO_buf_t FIFO_UART ;
    if (FIFO_init (&FIFO_UART , uart_buffer , 5 ) ==  FIFO_no_error )
        printf ("fifo init ------- DONE \n");
    for (i =0 ; i < 7 ; i ++)
    {
        printf ("FIFO Enqueue (%x) \n " , i);
        if (FIFO_enqueue (&FIFO_UART , i ) ==  FIFO_no_error)
            printf ("\t fifo enqueue --------- DONE \n");
        else
            printf ("\t fifo enqueue --------- failed \n");
    }

    FIFO_print (&FIFO_UART);
    if (FIFO_dequeue (&FIFO_UART ,&temp ) ==  FIFO_no_error)
        printf ("fifo dequeue %x ---------- DONE \n");

    if (FIFO_dequeue (&FIFO_UART ,&temp ) ==  FIFO_no_error)
        printf ("fifo dequeue %x ---------- DONE \n");

    }


