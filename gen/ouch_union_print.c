void print_uEntryOrderOption(const u8_t l, const char_t t, const uEntryOrderOption u)
{
	printf("uEntryOrderOption : ");
	if(l==0){
		printf("none\n");
	}else{
		switch(t)
		{
		case 2:
			print_char_4_t(u.firm);
			break;
		case 3:
			print_u32_t(u.min_qty);
			break;
		case 4:
			print_eCustomerType(u.customer_type);
			break;
		case 5:
			print_u32_t(u.max_floor);
			break;
		case 6:
			print_ePriceType(u.price_type);
			break;
		case 7:
			print_sprice_t(u.peg_offset);
			break;
		case 9:
			print_price_t(u.discretion_price);
			break;
		case 10:
			print_eDiscretionPriceType(u.discretion_price_type);
			break;
		case 11:
			print_sprice_t(u.discretion_peg_offset);
			break;
		case 12:
			print_ePostOnly(u.post_only);
			break;
		case 13:
			print_u32_t(u.random_reserves);
			break;
		case 14:
			print_char_4_t(u.route);
			break;
		case 15:
			print_u32_t(u.expire_time);
			break;
		case 16:
			print_eYesNo(u.trade_now);
			break;
		case 17:
			print_eHandleInst(u.handle_inst);
			break;
		case 24:
			print_u16_t(u.group_id);
			break;
		case 25:
			print_eYesNo(u.shares_located);
			break;
		default :
			printf("ERROR, Unknown tag %u",t);
			assert(0);
		}
	}
	printf("\n");
}
void print_uReplaceOrderOption(const u8_t l, const char_t t, const uReplaceOrderOption u)
{
	printf("uReplaceOrderOption : ");
	if(l==0){
		printf("none\n");
	}else{
		switch(t)
		{
		case 3:
			print_u32_t(u.min_qty);
			break;
		case 5:
			print_u32_t(u.max_floor);
			break;
		case 6:
			print_ePriceType(u.price_type);
			break;
		case 7:
			print_sprice_t(u.peg_offset);
			break;
		case 9:
			print_price_t(u.discretion_price);
			break;
		case 10:
			print_eDiscretionPriceType(u.discretion_price_type);
			break;
		case 11:
			print_sprice_t(u.discretion_peg_offset);
			break;
		case 12:
			print_ePostOnly(u.post_only);
			break;
		case 13:
			print_u32_t(u.random_reserves);
			break;
		case 15:
			print_u32_t(u.expire_time);
			break;
		case 16:
			print_eYesNo(u.trade_now);
			break;
		case 17:
			print_eHandleInst(u.handle_inst);
			break;
		case 24:
			print_u16_t(u.group_id);
			break;
		case 25:
			print_eYesNo(u.shares_located);
			break;
		default :
			printf("ERROR, Unknown tag %u",t);
			assert(0);
		}
	}
	printf("\n");
}
void print_uOrderAcceptedOption(const u8_t l, const char_t t, const uOrderAcceptedOption u)
{
	printf("uOrderAcceptedOption : ");
	if(l==0){
		printf("none\n");
	}else{
		switch(t)
		{
		case 2:
			print_char_4_t(u.firm);
			break;
		case 3:
			print_u32_t(u.min_qty);
			break;
		case 4:
			print_eCustomerType(u.customer_type);
			break;
		case 5:
			print_u32_t(u.max_floor);
			break;
		case 6:
			print_ePriceType(u.price_type);
			break;
		case 7:
			print_sprice_t(u.peg_offset);
			break;
		case 9:
			print_price_t(u.discretion_price);
			break;
		case 10:
			print_eDiscretionPriceType(u.discretion_price_type);
			break;
		case 11:
			print_sprice_t(u.discretion_peg_offset);
			break;
		case 12:
			print_ePostOnly(u.post_only);
			break;
		case 13:
			print_u32_t(u.random_reserves);
			break;
		case 14:
			print_char_4_t(u.route);
			break;
		case 15:
			print_u32_t(u.expire_time);
			break;
		case 16:
			print_eYesNo(u.trade_now);
			break;
		case 17:
			print_eHandleInst(u.handle_inst);
			break;
		case 18:
			print_eBBOWeightIndicator(u.bbo_weight_indicator);
			break;
		case 22:
			print_u32_t(u.display_quantity);
			break;
		case 23:
			print_u64_t(u.display_price);
			break;
		case 24:
			print_u16_t(u.group_id);
			break;
		case 25:
			print_eYesNo(u.shares_located);
			break;
		default :
			printf("ERROR, Unknown tag %u",t);
			assert(0);
		}
	}
	printf("\n");
}
void print_uOrderReplacedOption(const u8_t l, const char_t t, const uOrderReplacedOption u)
{
	printf("uOrderReplacedOption : ");
	if(l==0){
		printf("none\n");
	}else{
		switch(t)
		{
		case 2:
			print_char_4_t(u.firm);
			break;
		case 3:
			print_u32_t(u.min_qty);
			break;
		case 5:
			print_u32_t(u.max_floor);
			break;
		case 6:
			print_ePriceType(u.price_type);
			break;
		case 12:
			print_ePostOnly(u.post_only);
			break;
		case 15:
			print_u32_t(u.expire_time);
			break;
		case 16:
			print_eYesNo(u.trade_now);
			break;
		case 17:
			print_eHandleInst(u.handle_inst);
			break;
		case 18:
			print_eBBOWeightIndicator(u.bbo_weight_indicator);
			break;
		default :
			printf("ERROR, Unknown tag %u",t);
			assert(0);
		}
	}
	printf("\n");
}
void print_uOrderRestartedOption(const u8_t l, const char_t t, const uOrderRestartedOption u)
{
	printf("uOrderRestartedOption : ");
	if(l==0){
		printf("none\n");
	}else{
		switch(t)
		{
		case 22:
			print_u32_t(u.display_quantity);
			break;
		case 23:
			print_u64_t(u.display_price);
			break;
		case 1:
			print_u64_t(u.secondary_ord_ref_num);
			break;
		default :
			printf("ERROR, Unknown tag %u",t);
			assert(0);
		}
	}
	printf("\n");
}
