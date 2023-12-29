#include "lifo.h"
#include "stdio.h"
#include "stdlib.h"
//API definitions

LIFO_status LIFO_add_Item (LIFO_Buf_t* lifo_buf , unsigned int item)
{
    //before adding any data
    //check lifo is valid
    if (!lifo_buf->base || !lifo_buf->head)
        return LIFO_null ;

    //check lifo is full
    if (lifo_buf->count == lifo_buf->length)
        return LIFO_full ;

    //add value
    *(lifo_buf->head) = item ;
    lifo_buf->head++ ;  // which lifo_buf is already a pointer
    lifo_buf->count++ ; // which lifo_buf is already a pointer

    return LIFO_no_error ;
}
LIFO_status LIFO_get_Item (LIFO_Buf_t* lifo_buf , unsigned int* item)
{

  //check lifo is valid
    if (!lifo_buf->base || !lifo_buf->head)
        return LIFO_null ;

   //check lifo is empty
    if (!lifo_buf->count == 0)
        return LIFO_empty ;

    //POP , back one step , take this value , return it
    lifo_buf->head-- ;
    *item = *(lifo_buf->head) ;
    lifo_buf->count --;

    return LIFO_no_error ;

}
LIFO_status LIFO_init (LIFO_Buf_t* lifo_buf , unsigned int buf , unsigned int length)
{
    //check first if LIFO_buffer is NULL
    if (buf == NULL)
        return LIFO_null ;

    lifo_buf ->base = buf ;
    lifo_buf ->head = buf ;
    lifo_buf ->length = length ;
    lifo_buf ->count = 0 ;
    return LIFO_no_error ;

}
