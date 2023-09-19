void print_entry_order_request(const entry_order_request_s* e)
{	printf("entry_order_request {\n\n");
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("side : ");
	print_eSide(e->side);
	printf("quantity : ");
	print_u32_t(e->quantity);
	printf("symbol : ");
	print_char_8_t(e->symbol);
	printf("price : ");
	print_price_t(e->price);
	printf("time_in_force : ");
	print_eTimeInForce(e->time_in_force);
	printf("display : ");
	print_char_t(e->display);
	printf("capacity : ");
	print_eCapacity(e->capacity);
	printf("inter_market_sweep_eligibility : ");
	print_eEligibility(e->inter_market_sweep_eligibility);
	printf("cross_type : ");
	print_eCrossType(e->cross_type);
	printf("CIOrdID : ");
	print_char_14_t(e->CIOrdID);
	printf("appendage_length : ");
	print_u8_t(e->appendage_length);
	printf("appendage_tag : ");
	print_u8_t(e->appendage_tag);
	print_uEntryOrderOption(e->appendage_length, e->appendage_tag,e->optional_appendage);
	printf("}\n");
}
void print_replace_order_request(const replace_order_request_s* e)
{	printf("replace_order_request {\n\n");
	printf("orig_user_ref_num : ");
	print_u32_t(e->orig_user_ref_num);
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("quantity : ");
	print_u32_t(e->quantity);
	printf("price : ");
	print_price_t(e->price);
	printf("time_in_force : ");
	print_eTimeInForce(e->time_in_force);
	printf("display : ");
	print_eDisplay(e->display);
	printf("inter_market_sweep_eligibility : ");
	print_eEligibility(e->inter_market_sweep_eligibility);
	printf("CIOrdID : ");
	print_char_14_t(e->CIOrdID);
	printf("appendage_length : ");
	print_u8_t(e->appendage_length);
	printf("appendage_tag : ");
	print_u8_t(e->appendage_tag);
	print_uReplaceOrderOption(e->appendage_length, e->appendage_tag,e->optional_appendage);
	printf("}\n");
}
void print_cancel_order_request(const cancel_order_request_s* e)
{	printf("cancel_order_request {\n\n");
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("quantity : ");
	print_u32_t(e->quantity);
	printf("}\n");
}
void print_modify_order_request(const modify_order_request_s* e)
{	printf("modify_order_request {\n\n");
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("side : ");
	print_eSide(e->side);
	printf("quantity : ");
	print_u32_t(e->quantity);
	printf("}\n");
}
void print_system_event_message(const system_event_message_s* e)
{	printf("system_event_message {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("event_code : ");
	print_eEventCode(e->event_code);
	printf("}\n");
}
void print_order_accepted(const order_accepted_s* e)
{	printf("order_accepted {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("side : ");
	print_eSide(e->side);
	printf("quantity : ");
	print_u32_t(e->quantity);
	printf("symbol : ");
	print_char_8_t(e->symbol);
	printf("price : ");
	print_price_t(e->price);
	printf("time_in_force : ");
	print_eTimeInForce(e->time_in_force);
	printf("display : ");
	print_eDisplay(e->display);
	printf("order_reference_number : ");
	print_u64_t(e->order_reference_number);
	printf("capacity : ");
	print_eCapacity(e->capacity);
	printf("inter_market_sweep_eligibility : ");
	print_eEligibility(e->inter_market_sweep_eligibility);
	printf("cross_type : ");
	print_eCrossType(e->cross_type);
	printf("order_state : ");
	print_eOrderState(e->order_state);
	printf("CIOrdID : ");
	print_char_14_t(e->CIOrdID);
	printf("appendage_length : ");
	print_u8_t(e->appendage_length);
	printf("appendage_tag : ");
	print_u8_t(e->appendage_tag);
	print_uOrderAcceptedOption(e->appendage_length, e->appendage_tag,e->optional_appendage);
	printf("}\n");
}
void print_replaced_message(const replaced_message_s* e)
{	printf("replaced_message {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("orig_user_ref_num : ");
	print_u32_t(e->orig_user_ref_num);
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("side : ");
	print_eSide(e->side);
	printf("quantity : ");
	print_u32_t(e->quantity);
	printf("price : ");
	print_price_t(e->price);
	printf("time_in_force : ");
	print_eTimeInForce(e->time_in_force);
	printf("display : ");
	print_eDisplay(e->display);
	printf("order_reference_number : ");
	print_u64_t(e->order_reference_number);
	printf("capacity : ");
	print_eCapacity(e->capacity);
	printf("inter_market_sweep_eligibility : ");
	print_eEligibility(e->inter_market_sweep_eligibility);
	printf("cross_type : ");
	print_eCrossType(e->cross_type);
	printf("order_state : ");
	print_eOrderState(e->order_state);
	printf("CIOrdID : ");
	print_char_14_t(e->CIOrdID);
	printf("appendage_length : ");
	print_u8_t(e->appendage_length);
	printf("appendage_tag : ");
	print_u8_t(e->appendage_tag);
	print_uOrderReplacedOption(e->appendage_length, e->appendage_tag,e->optional_appendage);
	printf("}\n");
}
void print_order_canceled(const order_canceled_s* e)
{	printf("order_canceled {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("quantity : ");
	print_u32_t(e->quantity);
	printf("reason : ");
	print_eOrderCancelReason(e->reason);
	printf("}\n");
}
void print_aiq_canceled_message(const aiq_canceled_message_s* e)
{	printf("aiq_canceled_message {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("decrement_shares : ");
	print_u32_t(e->decrement_shares);
	printf("reason : ");
	print_eOrderCancelReason(e->reason);
	printf("quantity_prevented_from_trading : ");
	print_u32_t(e->quantity_prevented_from_trading);
	printf("execution_price : ");
	print_price_t(e->execution_price);
	printf("liquidity_flag : ");
	print_eLiquidityFlags(e->liquidity_flag);
	printf("aiq_strategy : ");
	print_eAIQStrategy(e->aiq_strategy);
	printf("}\n");
}
void print_executed_message(const executed_message_s* e)
{	printf("executed_message {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("quantity : ");
	print_u32_t(e->quantity);
	printf("price : ");
	print_price_t(e->price);
	printf("liquidity_flag : ");
	print_eLiquidityFlags(e->liquidity_flag);
	printf("match_number : ");
	print_u64_t(e->match_number);
	printf("appendage_length : ");
	print_u16_t(e->appendage_length);
	printf("}\n");
}
void print_broken_trade_message(const broken_trade_message_s* e)
{	printf("broken_trade_message {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("match_number : ");
	print_u64_t(e->match_number);
	printf("reason : ");
	print_eBrokenTradeReason(e->reason);
	printf("CIOrdID : ");
	print_char_14_t(e->CIOrdID);
	printf("}\n");
}
void print_rejected_order_message(const rejected_order_message_s* e)
{	printf("rejected_order_message {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("reason : ");
	print_eOrderRejectReason(e->reason);
	printf("CIOrdID : ");
	print_char_14_t(e->CIOrdID);
	printf("}\n");
}
void print_cancel_pending_message(const cancel_pending_message_s* e)
{	printf("cancel_pending_message {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("}\n");
}
void print_cancel_reject_message(const cancel_reject_message_s* e)
{	printf("cancel_reject_message {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("}\n");
}
void print_order_priority_update_message(const order_priority_update_message_s* e)
{	printf("order_priority_update_message {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("price : ");
	print_price_t(e->price);
	printf("display : ");
	print_eDisplay(e->display);
	printf("order_reference_number : ");
	print_u64_t(e->order_reference_number);
	printf("}\n");
}
void print_order_modified_message(const order_modified_message_s* e)
{	printf("order_modified_message {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("side : ");
	print_eSide(e->side);
	printf("quantity : ");
	print_u32_t(e->quantity);
	printf("}\n");
}
void print_order_restated_message(const order_restated_message_s* e)
{	printf("order_restated_message {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("user_ref_num : ");
	print_u32_t(e->user_ref_num);
	printf("reason : ");
	print_eOrderRejectReason(e->reason);
	printf("appendage_length : ");
	print_u8_t(e->appendage_length);
	printf("appendage_tag : ");
	print_u8_t(e->appendage_tag);
	print_uOrderRestartedOption(e->appendage_length, e->appendage_tag,e->optional_appendage);
	printf("}\n");
}
void print_account_query_response_message(const account_query_response_message_s* e)
{	printf("account_query_response_message {\n\n");
	printf("timestamp : ");
	print_timestamp_t(e->timestamp);
	printf("next_user_ref_num : ");
	print_u32_t(e->next_user_ref_num);
	printf("}\n");
}
