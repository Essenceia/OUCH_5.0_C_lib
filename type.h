#ifndef TYPE_H
#define TYPE_H
#include <stdint.h>
#include <stdbool.h>

// typedefs

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

/* define enums */
#include "gen/ouch_enum.h"

/* define unions */
#include "gen/ouch_union.h"

#endif // TYPE_H
