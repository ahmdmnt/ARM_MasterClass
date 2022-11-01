/*****************************************************************************
 * FILE 1: types.h
 *  ** Common - Platform Types And STD Types **
 *     -----------------------------------
 *
 *  Created on: Nov 1, 2022
 *      Author: Ahmed Montasser
******************************************************************************/

#ifndef TYPES_H_
#define TYPES_H_

/* Boolean Data Type */
typedef unsigned char bool;

/* Boolean Values */
#ifndef FALSE
#define FALSE       (0u)
#endif

#ifndef TRUE
#define TRUE        (1u)
#endif

#ifndef STD_HIGH
#define STD_HIGH        (1u)
#endif

#ifndef STD_LOW
#define STD_LOW         (0u)
#endif

#ifndef STD_ON
#define STD_ON         (1u)
#endif

#ifndef STD_OFF
#define STD_OFF         (0u)
#endif

#ifndef ENABLE
#define ENABLE         (1u)
#endif

#ifndef DISABLE
#define DISABLE         (0u)
#endif

typedef unsigned char       uint8;      /*           0 .. 255             */`
typedef signed char         sint8;      /*        -128 .. +127            */

typedef unsigned short     uint16;      /*           0 .. 65535           */
typedef signed short       sint16;      /*      -32768 .. +32767          */

typedef unsigned long       uint32;      /*           0 .. 4294967295      */
typedef signed long         sint32;      /* -2147483648 .. +2147483647     */

typedef unsigned long long uint64;       /*    0..18446744073709551615     */
typedef signed long long   sint64;  

typedef float  float32;
typedef double float64;

#endif /* TYPES_H_ */



/*****************************************************************************
 * FILE 2: macros.h
 *  ** Common - Bit-wise Operations Macros **
 *     ----------------------------------- 
 *
 *  Created on: Nov 1, 2022
 *      Author: Ahmed Montasser
******************************************************************************/

#ifndef MACROS_H_
#define MACROS_H_

/*
 * Normal Macros
*/

/* Set a certain bit in any register */
#define SET_BIT(binary,bit) (binary |= (1<<bit))

/* Clear a certain bit in any register */
#define CLR_BIT(binary,bit) (binary &= (~(1<<bit)))

/* Toggle a certain bit in any register */
#define TGL_BIT(binary,bit) (binary ^= (1<<bit))

/* Check Value of a specific bit in any register*/
#define READ_BIT(binary,bit) ((binary & (1<<bit))>>bit)


/*
 * Bit Band Macros   
*/

/* Set a certain bit in any register */
#define SET_BIT_BITBAND(binary,bit) //(binary |= (1<<bit))

/* Clear a certain bit in any register */
#define CLR_BIT_BITBAND(binary,bit) //(binary &= (~(1<<bit)))

#endif /* MACROS_H_ */
