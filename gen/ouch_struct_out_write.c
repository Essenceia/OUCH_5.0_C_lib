uint8_t* write_ouch_out(ouch_out_s* s, size_t *len)
{
	assert(s);
	*len = 0;
	uint8_t *buff = NULL;
	switch(s->message_type){
		case 'S':
			*len = 10;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->system_event_message),sizeof(uint8_t)*(*len));
			break;
		case 'A':
			*len = 64;
			*len += s->order_accepted.appendage_length;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->order_accepted),sizeof(uint8_t)*(*len));
			break;
		case 'U':
			*len = 68;
			*len += s->replaced_message.appendage_length;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->replaced_message),sizeof(uint8_t)*(*len));
			break;
		case 'C':
			*len = 18;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->order_canceled),sizeof(uint8_t)*(*len));
			break;
		case 'D':
			*len = 32;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->aiq_canceled_message),sizeof(uint8_t)*(*len));
			break;
		case 'E':
			*len = 36;
			*len += s->executed_message.appendage_length;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->executed_message),sizeof(uint8_t)*(*len));
			break;
		case 'B':
			*len = 36;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->broken_trade_message),sizeof(uint8_t)*(*len));
			break;
		case 'J':
			*len = 29;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->rejected_order_message),sizeof(uint8_t)*(*len));
			break;
		case 'P':
			*len = 13;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->cancel_pending_message),sizeof(uint8_t)*(*len));
			break;
		case 'I':
			*len = 13;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->cancel_reject_message),sizeof(uint8_t)*(*len));
			break;
		case 'T':
			*len = 30;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->order_priority_update_message),sizeof(uint8_t)*(*len));
			break;
		case 'M':
			*len = 18;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->order_modified_message),sizeof(uint8_t)*(*len));
			break;
		case 'R':
			*len = 16;
			*len += s->order_restated_message.appendage_length;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->order_restated_message),sizeof(uint8_t)*(*len));
			break;
		case 'Q':
			*len = 13;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->account_query_response_message),sizeof(uint8_t)*(*len));
			break;
		default:
			printf("ERROR: Unknown message type %c\n",s->message_type);
			assert(0);
			break;
		}
	return buff;
}
