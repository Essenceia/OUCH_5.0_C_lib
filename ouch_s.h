#ifndef OUCH_S_H
#define OUCH_S_H

#include "type.h"
#include <stdio.h>

/* define ouch structs */
#include "gen/ouch_struct.h"
/* print ouch structs */
#include "gen/ouch_struct_print.h"

/* define ouch inbound structs */
typedef struct{
	char_t message_type;
	#include "gen/ouch_in_struct_elem.h"
}ouch_in_s;

/* read/write functions */
#include "gen/ouch_struct_in_read.h"
#include "gen/ouch_struct_in_write.h"

/* define ouch outbound structs */
typedef struct{
	char_t message_type;
	#include "gen/ouch_out_struct_elem.h"
}ouch_out_s;


/* read/write functions */
#include "gen/ouch_struct_out_read.h"
#include "gen/ouch_struct_out_write.h"


#endif // OUCH_S_H

