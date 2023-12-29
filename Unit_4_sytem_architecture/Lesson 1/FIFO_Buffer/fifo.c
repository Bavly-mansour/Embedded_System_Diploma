#include "fifo.h"

//FIFO APIs


FIFO_buf_status FIFO_init (FIFO_buf_t* fifo , element_type* buf , uint32_t length)
{
    if (buf == NULL)
        return FIFO_null ;
    fifo->base = buf;
    fifo->head = buf;
    fifo->tail = buf;
    fifo->length = length;
    fifo->count = 0;
    return FIFO_no_error;

}



FIFO_buf_status FIFO_enqueue (FIFO_buf_t* fifo , element_type item)
{
    //checking for NULL
    if (!fifo->base || !fifo->head || !fifo->tail)
        return FIFO_null ;

    if (FIFO_is_full (fifo) == FIFO_full)
        return FIFO_full;
    *(fifo->head) = item ;
    fifo->count++;

    //code of circular FIFO
    //head = base + (length * size of element_type) ??
    if (fifo->head == (fifo->base + (fifo->length * sizeof(element_type))))
        fifo->head = fifo->base; //reset head to start
    else
        fifo->head++; //continue
    return FIFO_no_error;
}

FIFO_buf_status FIFO_dequeue (FIFO_buf_t* fifo , element_type* item)
{
    //checking for NULL
    if (!fifo->base || !fifo->head || !fifo->tail)
        return FIFO_null ;
    //checking FIFO empty
    if (fifo->count == 0)
        return FIFO_empty;

    *item = *(fifo->tail) ;
    fifo -> count --;

    //code of circular FIFO
    if (fifo->tail == (fifo->base + (fifo->length * sizeof (element_type))))
        fifo->tail = fifo->base ;
    else
        fifo->tail++;
    return FIFO_no_error;



}

FIFO_buf_status FIFO_is_full (FIFO_buf_t* fifo)
{
    if (!fifo->base || !fifo->head || !fifo->tail)
        return FIFO_null;
    if (fifo->count == fifo->length)
        return FIFO_full;
    return FIFO_no_error;

}

void FIFO_print (FIFO_buf_t* fifo)
{
    element_type* temp ;
    int i ;
    if (fifo->count == 0)
    {
        printf ("fifo is empty \n");

    }
    else {
        temp = fifo->tail;
        printf ("\n ===========FIFO print ==============\n");
        for (i=0 ; i < fifo->count ; i++)
        {
            printf ("\t %X \n " , *temp);
            temp++;
        }
        printf ("====================\n");
    }

}
