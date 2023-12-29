#ifndef LIFO_H_
#define LIFO_H_

//type definitions
typedef struct{
    unsigned int length;
    unsigned int count ;
    unsigned int* base ;
    unsigned int* head ;

}LIFO_Buf_t;

typedef enum {
    LIFO_no_error , //no error [0]
    LIFO_full ,     //no free space [1]
    LIFO_empty ,    //LIFO is empty [2]
    LIFO_null       //LIFO is not found [3]

}LIFO_status;

//API

LIFO_status LIFO_add_Item (LIFO_Buf_t* lifo_buf , unsigned int item);
LIFO_status LIFO_get_Item (LIFO_Buf_t* lifo_buf , unsigned int* item);
LIFO_status LIFO_init (LIFO_Buf_t* lifo_buf , unsigned int buf , unsigned int length);
#endif // LIFO_H_
