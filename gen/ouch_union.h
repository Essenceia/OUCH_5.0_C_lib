typedef union {
	char_4_t firm;
	u32_t min_qty;
	eCustomerType customer_type;
	u32_t max_floor;
	ePriceType price_type;
	sprice_t peg_offset;
	price_t discretion_price;
	eDiscretionPriceType discretion_price_type;
	sprice_t discretion_peg_offset;
	ePostOnly post_only;
	u32_t random_reserves;
	char_4_t route;
	u32_t expire_time;
	eYesNo trade_now;
	eHandleInst handle_inst;
	u16_t group_id;
	eYesNo shares_located;
} uEntryOrderOption;

typedef union {
	u32_t min_qty;
	u32_t max_floor;
	ePriceType price_type;
	sprice_t peg_offset;
	price_t discretion_price;
	eDiscretionPriceType discretion_price_type;
	sprice_t discretion_peg_offset;
	ePostOnly post_only;
	u32_t random_reserves;
	u32_t expire_time;
	eYesNo trade_now;
	eHandleInst handle_inst;
	u16_t group_id;
	eYesNo shares_located;
} uReplaceOrderOption;

typedef union {
	char_4_t firm;
	u32_t min_qty;
	eCustomerType customer_type;
	u32_t max_floor;
	ePriceType price_type;
	sprice_t peg_offset;
	price_t discretion_price;
	eDiscretionPriceType discretion_price_type;
	sprice_t discretion_peg_offset;
	ePostOnly post_only;
	u32_t random_reserves;
	char_4_t route;
	u32_t expire_time;
	eYesNo trade_now;
	eHandleInst handle_inst;
	eBBOWeightIndicator bbo_weight_indicator;
	u32_t display_quantity;
	u64_t display_price;
	u16_t group_id;
	eYesNo shares_located;
} uOrderAcceptedOption;

typedef union {
	char_4_t firm;
	u32_t min_qty;
	u32_t max_floor;
	ePriceType price_type;
	ePostOnly post_only;
	u32_t expire_time;
	eYesNo trade_now;
	eHandleInst handle_inst;
	eBBOWeightIndicator bbo_weight_indicator;
} uOrderReplacedOption;

typedef union {
	u32_t display_quantity;
	u64_t display_price;
	u64_t secondary_ord_ref_num;
} uOrderRestartedOption;

