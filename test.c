#include <stdio.h>
#include "ouch_s.h"

int main(){
	printf("OUCH lib test\n");

	/* type test */
	u64_t raw = 1000;
	timestamp_t t = htobe64(raw);
	
	print_timestamp_t(t);

	/* struct test */
	entry_order_request_s req = {0};
	/* set acceptable values for enums */
	req.side = BUY;
	req.time_in_force = DAY;
	req.display = VISIBLE;
	req.capacity = AGENCY;
	req.inter_market_sweep_eligibility = ELIGIBLE;
	req.cross_type = CONTINUOUS_MARKET;
	req.appendage_length = sizeof(u32_t);
	req.appendage_tag = 3;
	req.optional_appendage.min_qty = 10;

	print_entry_order_request(&req);

	return 0;
}
