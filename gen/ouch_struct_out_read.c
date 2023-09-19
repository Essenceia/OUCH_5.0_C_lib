ouch_out_s* read_ouch_out_s(uint8_t* buff, size_t len)
{
	assert(buff);
	if(len==0){
		return NULL;
	}else{
		ouch_out_s*s = malloc(sizeof(ouch_out_s));
		s->message_type = buff[0];
		switch(s->message_type){
			case 'S':
				memcpy(&(s->system_event_message),buff+1,sizeof(s->system_event_message));
				break;
			case 'A':
				memcpy(&(s->order_accepted),buff+1,sizeof(s->order_accepted));
				break;
			case 'U':
				memcpy(&(s->replaced_message),buff+1,sizeof(s->replaced_message));
				break;
			case 'C':
				memcpy(&(s->order_canceled),buff+1,sizeof(s->order_canceled));
				break;
			case 'D':
				memcpy(&(s->aiq_canceled_message),buff+1,sizeof(s->aiq_canceled_message));
				break;
			case 'E':
				memcpy(&(s->executed_message),buff+1,sizeof(s->executed_message));
				break;
			case 'B':
				memcpy(&(s->broken_trade_message),buff+1,sizeof(s->broken_trade_message));
				break;
			case 'J':
				memcpy(&(s->rejected_order_message),buff+1,sizeof(s->rejected_order_message));
				break;
			case 'P':
				memcpy(&(s->cancel_pending_message),buff+1,sizeof(s->cancel_pending_message));
				break;
			case 'I':
				memcpy(&(s->cancel_reject_message),buff+1,sizeof(s->cancel_reject_message));
				break;
			case 'T':
				memcpy(&(s->order_priority_update_message),buff+1,sizeof(s->order_priority_update_message));
				break;
			case 'M':
				memcpy(&(s->order_modified_message),buff+1,sizeof(s->order_modified_message));
				break;
			case 'R':
				memcpy(&(s->order_restated_message),buff+1,sizeof(s->order_restated_message));
				break;
			case 'Q':
				memcpy(&(s->account_query_response_message),buff+1,sizeof(s->account_query_response_message));
				break;
			default:
				printf("ERROR: Unknown message type %c\n",s->message_type);
				assert(0);
				break;
			}
		return s;
	}
}
