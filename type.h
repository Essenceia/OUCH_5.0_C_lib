#ifndef TYPE_H
#define TYPE_H
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h>
#define _BSD_SOURCE
#include <endian.h>


/* typedefs */

typedef uint8_t  u8_t;
typedef uint16_t u16_t;
typedef uint32_t u32_t;
typedef uint64_t u64_t;

typedef int32_t  sprice_t;
typedef uint64_t price_t;

typedef char char_t;
typedef char char_4_t[4]; 
typedef char char_8_t[8]; 
typedef char char_14_t[14] ;

typedef uint64_t timestamp_t;

/* print types */
static inline void print_char_t(const char *name, char_t b){ printf("%s %c\n",name, isalpha(b) ? b : b + '0');}

#define PRINT_CHAR_X_T(X) \
static inline void print_char_##X##_t(const char *name, uint8_t b[ X ]){ \
	printf("%s ", name); \
	for( int i = 0; i < X; i++)printf("%c", b[i]); \
	for( int i = 0; i < X; i++)printf(" %u", b[i]); \
	printf("\n");	\
}

PRINT_CHAR_X_T(2)
PRINT_CHAR_X_T(4)
PRINT_CHAR_X_T(8)
PRINT_CHAR_X_T(14)

static inline void print_u8_t(const char *name, u8_t b){ printf("%s %u\n",name, b);}
static inline void print_u16_t(const char *name, u16_t b){ printf("%s %u\n",name,be16toh(b));}
static inline void print_u32_t(const char *name, u32_t b){ printf("%s %u\n",name,be32toh(b));}
static inline void print_u64_t(const char *name, u64_t b){ printf("%s %lu\n",name,be64toh(b));}

static inline void print_sprice_t(const char *name, sprice_t b){ printf("%s %d.%0.4u",name, be32toh((uint32_t)b)/10000,be32toh((uint32_t)b)%10000 );}
static inline void print_price_t(const char *name, price_t b){ printf("%s %lu.%0.4lu\n",name,be64toh(b)/1000,be64toh(b)%10000 );}

static inline void print_timestamp_t(const char *name, timestamp_t b){ printf("%s %luns\n",name,be64toh(b));}

/* define enums */
#include "gen/ouch_enum.h"

/* print enums */
#include "gen/ouch_enum_print.h"


/* define unions */
#include "gen/ouch_union.h"


#endif // TYPE_H
