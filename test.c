#include <stdio.h>
#include "ouch_s.h"

int main(){
	printf("OUCH lib test\n");

	/* type test */
	u64_t raw = 1000;
	timestamp_t t = htobe64(raw);
	
	print_timestamp_t(t);

	/* struct test */
	entry_order_request_s ord_req = {0};
	print_entry_order_request(&ord_req);

	return 0;
}
