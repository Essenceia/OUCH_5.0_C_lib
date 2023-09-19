ouch_in_s* read_ouch_in_s(uint8_t* buff, size_t len)
{
	assert(buff);
	if(len==0){
		return NULL;
	}else{
		ouch_in_s*s = malloc(sizeof(ouch_in_s));
		s->message_type = buff[0];
		switch(s->message_type){
			case 'O':
				memcpy(&(s->entry_order_request),buff+1,sizeof(s->entry_order_request));
				break;
			case 'U':
				memcpy(&(s->replace_order_request),buff+1,sizeof(s->replace_order_request));
				break;
			case 'X':
				memcpy(&(s->cancel_order_request),buff+1,sizeof(s->cancel_order_request));
				break;
			case 'M':
				memcpy(&(s->modify_order_request),buff+1,sizeof(s->modify_order_request));
				break;
			case 'Q':
				break;
			default:
				printf("ERROR: Unknown message type %c\n",s->message_type);
				assert(0);
				break;
			}
		return s;
	}
}
