/*
   Created on 2nd of December 2023
   Created by : Bavly Mansour Grant
   This is a PLATFORM_TYPES.h
*/
#ifndef PLATFROM_TYPES_H //header protection
#define PLATFROM_TYPES_H


#include <stdbool.h>
#include <stdint.h>

/*Boolean*/
#ifndef _Bool  //header protection
#define _Bool unsigned char
#endif // _Bool

/*CPU*/
#define CPU_TYPE            CPU_TYPE_32
#define CPU_BIT_ORDER       MSB_FIRST
#define CPU_BYTE_ORDER      HIGH_BYTE_FIRST

#ifndef FLASE
#define FAlSE               (boolean)false
#endif // FLASE

#ifndef TRUE
#define TRUE                (boolean)true
#endif // TRUE


typedef _Bool                boolean;
typedef int8_t               sint8;
typedef uint8_t              uint8;
typedef char                 char_t;


typedef int16_t              sint16;
typedef uint16_t             uint16;


typedef int32_t              sint32;
typedef uint32_t             uint32;


typedef int64_t              sint64;
typedef uint64_t             uint64;

typedef volatile int8_t       vint8_t;
typedef volatile uint8_t      vuint8_t;

typedef volatile int16_t      vint16_t;
typedef volatile uint16_t     vuint16_t;

typedef volatile int32_t      vint32_t;
typedef volatile uint32_t     vuint32_t;

typedef volatile int64_t      vint64_t;
typedef volatile uint64_t     vuint64_t;

#endif // PLATFROM_TYPES_H
/*THANK YOU*/
