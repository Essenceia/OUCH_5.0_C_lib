#ifndef TYPE_H
#define TYPE_H
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h>
#define _BSD_SOURCE
#include <endian.h>
#include <stdio.h>

/* typedefs */

typedef uint8_t  u8_t;
typedef uint16_t u16_t;
typedef uint32_t u32_t;
typedef uint64_t u64_t;

typedef int32_t  sprice_t;
typedef uint64_t price_t;

typedef uint8_t char_t;
typedef uint8_t char_4_t[4]; 
typedef uint8_t char_8_t[8]; 
typedef uint8_t char_14_t[14] ;

typedef uint64_t timestamp_t;

/* print types */
static inline void print_char_t(const char_t b){ printf("%c\n",isalpha(b) ? b : b + '0');}

#define PRINT_CHAR_X_T(X) \
static inline void print_char_##X##_t(const uint8_t b[ X ]){ \
	for( int i = 0; i < X; i++)printf("%c", b[i]); \
	for( int i = 0; i < X; i++)printf(" %u", b[i]); \
	printf("\n");	\
}

PRINT_CHAR_X_T(2)
PRINT_CHAR_X_T(4)
PRINT_CHAR_X_T(8)
PRINT_CHAR_X_T(14)

static inline void print_u8_t (const u8_t b) { printf("%u\n" ,b);}
static inline void print_u16_t(const u16_t b){ printf("%u\n" ,be16toh(b));}
static inline void print_u32_t(const u32_t b){ printf("%u\n" ,be32toh(b));}
static inline void print_u64_t(const u64_t b){ printf("%lu\n",be64toh(b));}

static inline void print_sprice_t(const sprice_t b){ printf("%u.%u",    be32toh((uint32_t)b)/10000,be32toh((uint32_t)b)%10000 );}
static inline void print_price_t (const price_t b) { printf("%lu.%lu\n",be64toh(b)/1000,be64toh(b)%10000 );}

static inline void print_timestamp_t(const timestamp_t b){ printf("%luns\n",be64toh(b));}

/* define enums */
#include "gen/ouch_enum.h"

/* print enums */
#include "gen/ouch_enum_print.h"


/* define unions */
#include "gen/ouch_union.h"


#endif // TYPE_H
