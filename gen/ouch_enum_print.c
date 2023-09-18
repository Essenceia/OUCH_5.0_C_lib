void print_eHandleInst(eHandleInst e)
{	printf("eHandleInst : ");
	switch(e)
	{
	case IMBALANCE_ONLY:
		printf("IMBALANCE_ONLY");
		break;
	case RETAIL_ORDER_TYPE_1:
		printf("RETAIL_ORDER_TYPE_1");
		break;
	case RETAIL_ORDER_TYPE_2:
		printf("RETAIL_ORDER_TYPE_2");
		break;
	case RETAIL_PRICE_IMPROVEMENT:
		printf("RETAIL_PRICE_IMPROVEMENT");
		break;
	case EXTENDED_LIFE_CONTINUOUS:
		printf("EXTENDED_LIFE_CONTINUOUS");
		break;
	case DIRECT_LISTING_CAPITAL_RAISE:
		printf("DIRECT_LISTING_CAPITAL_RAISE");
		break;
	case RETAIL_PRICE_IMPROVEMENT_HIDDEN:
		printf("RETAIL_PRICE_IMPROVEMENT_HIDDEN");
		break;
	case NO_INSTRUCTIONS:
		printf("NO_INSTRUCTIONS");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eBBOWeightIndicator(eBBOWeightIndicator e)
{	printf("eBBOWeightIndicator : ");
	switch(e)
	{
	case ZERO_ZERO_DOT_TWO:
		printf("ZERO_ZERO_DOT_TWO");
		break;
	case ZERO_DOT_TWO_ONE:
		printf("ZERO_DOT_TWO_ONE");
		break;
	case ONE_TWO:
		printf("ONE_TWO");
		break;
	case GREATER_THAN_TWO:
		printf("GREATER_THAN_TWO");
		break;
	case UNSPECIFIED:
		printf("UNSPECIFIED");
		break;
	case SETS_QBBO:
		printf("SETS_QBBO");
		break;
	case IMPROVES_NBBO:
		printf("IMPROVES_NBBO");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eYesNo(eYesNo e)
{	printf("eYesNo : ");
	switch(e)
	{
	case YES:
		printf("YES");
		break;
	case NO:
		printf("NO");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_ePostOnly(ePostOnly e)
{	printf("ePostOnly : ");
	switch(e)
	{
	case POST_ONLY:
		printf("POST_ONLY");
		break;
	case POST_NO:
		printf("POST_NO");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eCustomerType(eCustomerType e)
{	printf("eCustomerType : ");
	switch(e)
	{
	case CUSTOMER_RETAIL:
		printf("CUSTOMER_RETAIL");
		break;
	case CUSTOMER_NOT_RETAIL:
		printf("CUSTOMER_NOT_RETAIL");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eDiscretionPriceType(eDiscretionPriceType e)
{	printf("eDiscretionPriceType : ");
	switch(e)
	{
	case DISCRETION_PRICE_TYPE_LIMIT:
		printf("DISCRETION_PRICE_TYPE_LIMIT");
		break;
	case DISCRETION_PRICE_TYPE_MARKET_PEG:
		printf("DISCRETION_PRICE_TYPE_MARKET_PEG");
		break;
	case DISCRETION_PRICE_TYPE_MIDPOINT_PEG:
		printf("DISCRETION_PRICE_TYPE_MIDPOINT_PEG");
		break;
	case DISCRETION_PRICE_TYPE_PRIMARY_PEG:
		printf("DISCRETION_PRICE_TYPE_PRIMARY_PEG");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_ePriceType(ePriceType e)
{	printf("ePriceType : ");
	switch(e)
	{
	case PRICE_TYPE_LIMIT:
		printf("PRICE_TYPE_LIMIT");
		break;
	case PRICE_TYPE_MARKET_PEG:
		printf("PRICE_TYPE_MARKET_PEG");
		break;
	case PRICE_TYPE_MIDPOINT_PEG:
		printf("PRICE_TYPE_MIDPOINT_PEG");
		break;
	case PRICE_TYPE_PRIMARY_PEG:
		printf("PRICE_TYPE_PRIMARY_PEG");
		break;
	case PRICE_TYPE_MARKET_MAKER_PEG:
		printf("PRICE_TYPE_MARKET_MAKER_PEG");
		break;
	case PRICE_TYPE_MIDPOINT:
		printf("PRICE_TYPE_MIDPOINT");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eSide(eSide e)
{	printf("eSide : ");
	switch(e)
	{
	case BUY:
		printf("BUY");
		break;
	case SELL:
		printf("SELL");
		break;
	case SELL_SHORT:
		printf("SELL_SHORT");
		break;
	case SELL_SHORT_EXEMPT:
		printf("SELL_SHORT_EXEMPT");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eTimeInForce(eTimeInForce e)
{	printf("eTimeInForce : ");
	switch(e)
	{
	case DAY:
		printf("DAY");
		break;
	case IOC:
		printf("IOC");
		break;
	case GTX:
		printf("GTX");
		break;
	case GTT:
		printf("GTT");
		break;
	case AFTER_HOURS:
		printf("AFTER_HOURS");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eDisplay(eDisplay e)
{	printf("eDisplay : ");
	switch(e)
	{
	case VISIBLE:
		printf("VISIBLE");
		break;
	case HIDDEN:
		printf("HIDDEN");
		break;
	case ATTRIBUTABLE:
		printf("ATTRIBUTABLE");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eCapacity(eCapacity e)
{	printf("eCapacity : ");
	switch(e)
	{
	case AGENCY:
		printf("AGENCY");
		break;
	case PRINCIPAL:
		printf("PRINCIPAL");
		break;
	case RISKLESS:
		printf("RISKLESS");
		break;
	case OTHER:
		printf("OTHER");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eCrossType(eCrossType e)
{	printf("eCrossType : ");
	switch(e)
	{
	case CONTINUOUS_MARKET:
		printf("CONTINUOUS_MARKET");
		break;
	case OPENING_CROSS:
		printf("OPENING_CROSS");
		break;
	case CLOSING_CROSS:
		printf("CLOSING_CROSS");
		break;
	case HALT_IPO:
		printf("HALT_IPO");
		break;
	case SUPPLEMENTAL:
		printf("SUPPLEMENTAL");
		break;
	case RETAIL:
		printf("RETAIL");
		break;
	case EXTENDED_LIFE:
		printf("EXTENDED_LIFE");
		break;
	case AFTER_HOURS_CLOSE:
		printf("AFTER_HOURS_CLOSE");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eEligibility(eEligibility e)
{	printf("eEligibility : ");
	switch(e)
	{
	case ELIGIBLE:
		printf("ELIGIBLE");
		break;
	case NOT_ELIGIBLE:
		printf("NOT_ELIGIBLE");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eOrderState(eOrderState e)
{	printf("eOrderState : ");
	switch(e)
	{
	case ORDER_LIVE:
		printf("ORDER_LIVE");
		break;
	case ORDER_DEAD:
		printf("ORDER_DEAD");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eOrderCancelReason(eOrderCancelReason e)
{	printf("eOrderCancelReason : ");
	switch(e)
	{
	case CANCEL_REGULATORY_RESTRICTION:
		printf("CANCEL_REGULATORY_RESTRICTION");
		break;
	case CANCEL_CLOSING_CROSS:
		printf("CANCEL_CLOSING_CROSS");
		break;
	case CANCEL_POST_ONLY_PRICE_SLID:
		printf("CANCEL_POST_ONLY_PRICE_SLID");
		break;
	case CANCEL_POST_ONLY_CONTRA_SIDE:
		printf("CANCEL_POST_ONLY_CONTRA_SIDE");
		break;
	case CANCEL_HALTED:
		printf("CANCEL_HALTED");
		break;
	case CANCEL_IMMEDIATE_OR_CANCEL:
		printf("CANCEL_IMMEDIATE_OR_CANCEL");
		break;
	case CANCEL_MARKET_COLLARS:
		printf("CANCEL_MARKET_COLLARS");
		break;
	case CANCEL_SELF_MATCH_PREVENTION:
		printf("CANCEL_SELF_MATCH_PREVENTION");
		break;
	case CANCEL_SUPERVISORY:
		printf("CANCEL_SUPERVISORY");
		break;
	case CANCEL_TIMEOUT:
		printf("CANCEL_TIMEOUT");
		break;
	case CANCEL_USER_REQUESTED_CANCEL:
		printf("CANCEL_USER_REQUESTED_CANCEL");
		break;
	case CANCEL_OPEN_PROTECTION:
		printf("CANCEL_OPEN_PROTECTION");
		break;
	case CANCEL_SYSTEM_CANCEL:
		printf("CANCEL_SYSTEM_CANCEL");
		break;
	case CANCEL_COMPANY_DIRECT_LISTING:
		printf("CANCEL_COMPANY_DIRECT_LISTING");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eEventCode(eEventCode e)
{	printf("eEventCode : ");
	switch(e)
	{
	case START_OF_DAY:
		printf("START_OF_DAY");
		break;
	case END_OF_DAY:
		printf("END_OF_DAY");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eLiquidityFlags(eLiquidityFlags e)
{	printf("eLiquidityFlags : ");
	switch(e)
	{
	case LIQUIDITY_ADDED:
		printf("LIQUIDITY_ADDED");
		break;
	case LIQUIDITY_CLOSING_CROSS:
		printf("LIQUIDITY_CLOSING_CROSS");
		break;
	case LIQUIDITY_RETAIL_DESIGNATED_ADDING:
		printf("LIQUIDITY_RETAIL_DESIGNATED_ADDING");
		break;
	case LIQUIDITY_HALT_IPO_CROSS:
		printf("LIQUIDITY_HALT_IPO_CROSS");
		break;
	case LIQUIDITY_AFTER_HOURS_CLOSING_CROSS:
		printf("LIQUIDITY_AFTER_HOURS_CLOSING_CROSS");
		break;
	case LIQUIDITY_NON_DISPLAYED_ADDING:
		printf("LIQUIDITY_NON_DISPLAYED_ADDING");
		break;
	case LIQUIDITY_RPI_ORDER_PROVIDES_LIQUIDITY:
		printf("LIQUIDITY_RPI_ORDER_PROVIDES_LIQUIDITY");
		break;
	case LIQUIDITY_ADDED_LIQUIDITY_MIDPOINT:
		printf("LIQUIDITY_ADDED_LIQUIDITY_MIDPOINT");
		break;
	case LIQUIDITY_HALT_CROSS:
		printf("LIQUIDITY_HALT_CROSS");
		break;
	case LIQUIDITY_CLOSING_CROSS_IMBALANCE:
		printf("LIQUIDITY_CLOSING_CROSS_IMBALANCE");
		break;
	case LIQUIDITY_OPENING_CROSS_IMBALANCE:
		printf("LIQUIDITY_OPENING_CROSS_IMBALANCE");
		break;
	case LIQUIDITY_REMOVED_LIQUIDITY_MIDPOINT:
		printf("LIQUIDITY_REMOVED_LIQUIDITY_MIDPOINT");
		break;
	case LIQUIDITY_PASSIVE_MIDPOINT_EXECUTION:
		printf("LIQUIDITY_PASSIVE_MIDPOINT_EXECUTION");
		break;
	case LIQUIDITY_MIDPOINT_EXTENDED_LIFE_ORDER_EXECUTION:
		printf("LIQUIDITY_MIDPOINT_EXTENDED_LIFE_ORDER_EXECUTION");
		break;
	case LIQUIDITY_OPENING_CROSS:
		printf("LIQUIDITY_OPENING_CROSS");
		break;
	case LIQUIDITY_REMOVED_PRICE_IMPROVING_NON_DISPLAYED:
		printf("LIQUIDITY_REMOVED_PRICE_IMPROVING_NON_DISPLAYED");
		break;
	case LIQUIDITY_RMO_RETAIL_ORDER_REMOVES_NON_RPI_MIDPOINT:
		printf("LIQUIDITY_RMO_RETAIL_ORDER_REMOVES_NON_RPI_MIDPOINT");
		break;
	case LIQUIDITY_REMOVED:
		printf("LIQUIDITY_REMOVED");
		break;
	case LIQUIDITY_RETAIL_ORDER_REMOVES_RPI_LIQUIDITY:
		printf("LIQUIDITY_RETAIL_ORDER_REMOVES_RPI_LIQUIDITY");
		break;
	case LIQUIDITY_RETAIL_ORDER_REMOVES_NON_RPI_MIDPOINT_OTHER:
		printf("LIQUIDITY_RETAIL_ORDER_REMOVES_NON_RPI_MIDPOINT_OTHER");
		break;
	case LIQUIDITY_SUPPLEMENTAL_ORDER_EXECUTION:
		printf("LIQUIDITY_SUPPLEMENTAL_ORDER_EXECUTION");
		break;
	case LIQUIDITY_DISPLAYED_ADDING_ORDER_IMPROVES_NBBO:
		printf("LIQUIDITY_DISPLAYED_ADDING_ORDER_IMPROVES_NBBO");
		break;
	case LIQUIDITY_DISPLAYED_ADDING_ORDER_SETS_QBBO:
		printf("LIQUIDITY_DISPLAYED_ADDING_ORDER_SETS_QBBO");
		break;
	case LIQUIDITY_RPI_ORDER_PROVIDES_LIQUIDITY_NO_RPII:
		printf("LIQUIDITY_RPI_ORDER_PROVIDES_LIQUIDITY_NO_RPII");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eAIQStrategy(eAIQStrategy e)
{	printf("eAIQStrategy : ");
	switch(e)
	{
	case MPID_CANCEL_OLDEST:
		printf("MPID_CANCEL_OLDEST");
		break;
	case MPID_CANCEL_NEWEST:
		printf("MPID_CANCEL_NEWEST");
		break;
	case MPID_DECREMENT_BOTH:
		printf("MPID_DECREMENT_BOTH");
		break;
	case MPID_DECREMENT_BOTH_NO_DETAILS:
		printf("MPID_DECREMENT_BOTH_NO_DETAILS");
		break;
	case ORG_ID_CANCEL_OLDEST:
		printf("ORG_ID_CANCEL_OLDEST");
		break;
	case ORG_ID_CANCEL_NEWEST:
		printf("ORG_ID_CANCEL_NEWEST");
		break;
	case ORG_ID_DECREMENT_BOTH:
		printf("ORG_ID_DECREMENT_BOTH");
		break;
	case ORG_ID_DECREMENT_BOTH_NO_DETAILS:
		printf("ORG_ID_DECREMENT_BOTH_NO_DETAILS");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eBrokenTradeReason(eBrokenTradeReason e)
{	printf("eBrokenTradeReason : ");
	switch(e)
	{
	case BROKEN_ERRONEOUS:
		printf("BROKEN_ERRONEOUS");
		break;
	case BROKEN_CONSENT:
		printf("BROKEN_CONSENT");
		break;
	case BROKEN_SUPERVISOR:
		printf("BROKEN_SUPERVISOR");
		break;
	case BROKEN_EXTERNAL:
		printf("BROKEN_EXTERNAL");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eOrderRejectReason(eOrderRejectReason e)
{	printf("eOrderRejectReason : ");
	switch(e)
	{
	case REJECT_QUOTE_UNAVAILABLE:
		printf("REJECT_QUOTE_UNAVAILABLE");
		break;
	case REJECT_DESTINATION_CLOSED:
		printf("REJECT_DESTINATION_CLOSED");
		break;
	case REJECT_INVALID_DISPLAY:
		printf("REJECT_INVALID_DISPLAY");
		break;
	case REJECT_INVALID_MAX_FLOOR:
		printf("REJECT_INVALID_MAX_FLOOR");
		break;
	case REJECT_INVALID_PEG_TYPE:
		printf("REJECT_INVALID_PEG_TYPE");
		break;
	case REJECT_FAT_FINGER:
		printf("REJECT_FAT_FINGER");
		break;
	case REJECT_HALTED:
		printf("REJECT_HALTED");
		break;
	case REJECT_ISO_NOT_ALLOWED:
		printf("REJECT_ISO_NOT_ALLOWED");
		break;
	case REJECT_INVALID_SIDE:
		printf("REJECT_INVALID_SIDE");
		break;
	case REJECT_PROCESSING_ERROR:
		printf("REJECT_PROCESSING_ERROR");
		break;
	case REJECT_CANCEL_PENDING:
		printf("REJECT_CANCEL_PENDING");
		break;
	case REJECT_FIRM_NOT_AUTHORIZED:
		printf("REJECT_FIRM_NOT_AUTHORIZED");
		break;
	case REJECT_INVALID_MIN_QUANTITY:
		printf("REJECT_INVALID_MIN_QUANTITY");
		break;
	case REJECT_NO_CLOSING_REFERENCE_PRICE:
		printf("REJECT_NO_CLOSING_REFERENCE_PRICE");
		break;
	case REJECT_OTHER:
		printf("REJECT_OTHER");
		break;
	case REJECT_CANCEL_NOT_ALLOWED:
		printf("REJECT_CANCEL_NOT_ALLOWED");
		break;
	case REJECT_PEGGING_NOT_ALLOWED:
		printf("REJECT_PEGGING_NOT_ALLOWED");
		break;
	case REJECT_CROSSED_MARKET:
		printf("REJECT_CROSSED_MARKET");
		break;
	case REJECT_INVALID_QUANTITY:
		printf("REJECT_INVALID_QUANTITY");
		break;
	case REJECT_INVALID_CROSS_ORDER:
		printf("REJECT_INVALID_CROSS_ORDER");
		break;
	case REJECT_REPLACE_NOT_ALLOWED:
		printf("REJECT_REPLACE_NOT_ALLOWED");
		break;
	case REJECT_ROUTING_NOT_ALLOWED:
		printf("REJECT_ROUTING_NOT_ALLOWED");
		break;
	case REJECT_INVALID_SYMBOL:
		printf("REJECT_INVALID_SYMBOL");
		break;
	case REJECT_TEST:
		printf("REJECT_TEST");
		break;
	case REJECT_LATE_LOC_TOO_AGGRESSIVE:
		printf("REJECT_LATE_LOC_TOO_AGGRESSIVE");
		break;
	case REJECT_RETAIL_NOT_ALLOWED:
		printf("REJECT_RETAIL_NOT_ALLOWED");
		break;
	case REJECT_INVALID_MIDPOINT_POST_ONLY_PRICE:
		printf("REJECT_INVALID_MIDPOINT_POST_ONLY_PRICE");
		break;
	case REJECT_INVALID_DESTINATION:
		printf("REJECT_INVALID_DESTINATION");
		break;
	case REJECT_INVALID_PRICE:
		printf("REJECT_INVALID_PRICE");
		break;
	case REJECT_SHARES_EXCEED_THRESHOLD:
		printf("REJECT_SHARES_EXCEED_THRESHOLD");
		break;
	case REJECT_EXCEEDS_MAXIMUM_ALLOWED_NOTIONAL_VALUE:
		printf("REJECT_EXCEEDS_MAXIMUM_ALLOWED_NOTIONAL_VALUE");
		break;
	case REJECT_RISK_AGGREGATE_EXPOSURE_EXCEEDED:
		printf("REJECT_RISK_AGGREGATE_EXPOSURE_EXCEEDED");
		break;
	case REJECT_RISK_MARKET_IMPACT:
		printf("REJECT_RISK_MARKET_IMPACT");
		break;
	case REJECT_RISK_RESTRICTED_STOCK:
		printf("REJECT_RISK_RESTRICTED_STOCK");
		break;
	case REJECT_RISK_SHORT_SELL_RESTRICTED:
		printf("REJECT_RISK_SHORT_SELL_RESTRICTED");
		break;
	case REJECT_RISK_ORDER_TYPE_RESTRICTED:
		printf("REJECT_RISK_ORDER_TYPE_RESTRICTED");
		break;
	case REJECT_RISK_EXCEEDS_ADV_LIMIT:
		printf("REJECT_RISK_EXCEEDS_ADV_LIMIT");
		break;
	case REJECT_RISK_FAT_FINGER:
		printf("REJECT_RISK_FAT_FINGER");
		break;
	case REJECT_RISK_LOCATE_REQUIRED:
		printf("REJECT_RISK_LOCATE_REQUIRED");
		break;
	case REJECT_RISK_SYMBOL_MESSAGE_RATE_RESTRICTION:
		printf("REJECT_RISK_SYMBOL_MESSAGE_RATE_RESTRICTION");
		break;
	case REJECT_RISK_PORT_MESSAGE_RATE_RESTRICTION:
		printf("REJECT_RISK_PORT_MESSAGE_RATE_RESTRICTION");
		break;
	case REJECT_RISK_DUPLICATE_MESSAGE_RATE_RESTRICTION:
		printf("REJECT_RISK_DUPLICATE_MESSAGE_RATE_RESTRICTION");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
void print_eOrderRestartReason(eOrderRestartReason e)
{	printf("eOrderRestartReason : ");
	switch(e)
	{
	case REFRESH_OF_DISPLAY:
		printf("REFRESH_OF_DISPLAY");
		break;
	case UPDATE_OF_DISPLAY:
		printf("UPDATE_OF_DISPLAY");
		break;
	default :
		printf("ERROR: Unmatch value");
		assert(0);
	}
	printf("\n");
}
