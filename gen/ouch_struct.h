typedef struct{
	u32_t user_ref_num;
	eSide side;
	u32_t quantity;
	char_8_t symbol;
	price_t price;
	eTimeInForce time_in_force;
	char_t display;
	eCapacity capacity;
	eEligibility inter_market_sweep_eligibility;
	eCrossType cross_type;
	char_14_t CIOrdID;
	u8_t appendage_length;
	u8_t appendage_tag;
	uEntryOrderOption optional_appendage;
} __attribute__((__packed__)) entry_order_request_s ;

typedef struct{
	u32_t orig_user_ref_num;
	u32_t user_ref_num;
	u32_t quantity;
	price_t price;
	eTimeInForce time_in_force;
	eDisplay display;
	eEligibility inter_market_sweep_eligibility;
	char_14_t CIOrdID;
	u8_t appendage_length;
	u8_t appendage_tag;
	uReplaceOrderOption optional_appendage;
} __attribute__((__packed__)) replace_order_request_s ;

typedef struct{
	u32_t user_ref_num;
	u32_t quantity;
} __attribute__((__packed__)) cancel_order_request_s ;

typedef struct{
	u32_t user_ref_num;
	eSide side;
	u32_t quantity;
} __attribute__((__packed__)) modify_order_request_s ;

typedef struct{
	timestamp_t timestamp;
	eEventCode event_code;
} __attribute__((__packed__)) system_event_message_s ;

typedef struct{
	timestamp_t timestamp;
	u32_t user_ref_num;
	eSide side;
	u32_t quantity;
	char_8_t symbol;
	price_t price;
	eTimeInForce time_in_force;
	eDisplay display;
	u64_t order_reference_number;
	eCapacity capacity;
	eEligibility inter_market_sweep_eligibility;
	eCrossType cross_type;
	eOrderState order_state;
	char_14_t CIOrdID;
	u8_t appendage_length;
	u8_t appendage_tag;
	uOrderAcceptedOption optional_appendage;
} __attribute__((__packed__)) order_accepted_s ;

typedef struct{
	timestamp_t timestamp;
	u32_t orig_user_ref_num;
	u32_t user_ref_num;
	eSide side;
	u32_t quantity;
	price_t price;
	eTimeInForce time_in_force;
	eDisplay display;
	u64_t order_reference_number;
	eCapacity capacity;
	eEligibility inter_market_sweep_eligibility;
	eCrossType cross_type;
	eOrderState order_state;
	char_14_t CIOrdID;
	u8_t appendage_length;
	u8_t appendage_tag;
	uOrderReplacedOption optional_appendage;
} __attribute__((__packed__)) replaced_message_s ;

typedef struct{
	timestamp_t timestamp;
	u32_t user_ref_num;
	u32_t quantity;
	eOrderCancelReason reason;
} __attribute__((__packed__)) order_canceled_s ;

typedef struct{
	timestamp_t timestamp;
	u32_t user_ref_num;
	u32_t decrement_shares;
	eOrderCancelReason reason;
	u32_t quantity_prevented_from_trading;
	price_t execution_price;
	eLiquidityFlags liquidity_flag;
	eAIQStrategy aiq_strategy;
} __attribute__((__packed__)) aiq_canceled_message_s ;

typedef struct{
	timestamp_t timestamp;
	u32_t user_ref_num;
	u32_t quantity;
	price_t price;
	eLiquidityFlags liquidity_flag;
	u64_t match_number;
	u16_t appendage_length;
} __attribute__((__packed__)) executed_message_s ;

typedef struct{
	timestamp_t timestamp;
	u32_t user_ref_num;
	u64_t match_number;
	eBrokenTradeReason reason;
	char_14_t CIOrdID;
} __attribute__((__packed__)) broken_trade_message_s ;

typedef struct{
	timestamp_t timestamp;
	u32_t user_ref_num;
	eOrderRejectReason reason;
	char_14_t CIOrdID;
} __attribute__((__packed__)) rejected_order_message_s ;

typedef struct{
	timestamp_t timestamp;
	u32_t user_ref_num;
} __attribute__((__packed__)) cancel_pending_message_s ;

typedef struct{
	timestamp_t timestamp;
	u32_t user_ref_num;
} __attribute__((__packed__)) cancel_reject_message_s ;

typedef struct{
	timestamp_t timestamp;
	u32_t user_ref_num;
	price_t price;
	eDisplay display;
	u64_t order_reference_number;
} __attribute__((__packed__)) order_priority_update_message_s ;

typedef struct{
	timestamp_t timestamp;
	u32_t user_ref_num;
	eSide side;
	u32_t quantity;
} __attribute__((__packed__)) order_modified_message_s ;

typedef struct{
	timestamp_t timestamp;
	u32_t user_ref_num;
	eOrderRejectReason reason;
	u8_t appendage_length;
	u8_t appendage_tag;
	uOrderRestartedOption optional_appendage;
} __attribute__((__packed__)) order_restated_message_s ;

typedef struct{
	timestamp_t timestamp;
	u32_t next_user_ref_num;
} __attribute__((__packed__)) account_query_response_message_s ;

