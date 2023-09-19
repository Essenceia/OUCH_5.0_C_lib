uint8_t* write_ouch_in(ouch_in_s* s, size_t *len)
{
	assert(s);
	*len = 0;
	uint8_t *buff = NULL;
	switch(s->message_type){
		case 'O':
			*len = 47;
			*len += s->entry_order_request.appendage_length;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->entry_order_request),sizeof(uint8_t)*(*len));
			break;
		case 'U':
			*len = 40;
			*len += s->replace_order_request.appendage_length;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->replace_order_request),sizeof(uint8_t)*(*len));
			break;
		case 'X':
			*len = 9;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->cancel_order_request),sizeof(uint8_t)*(*len));
			break;
		case 'M':
			*len = 10;
			buff = malloc(sizeof(uint8_t)*(*len));
			memcpy(buff, &(s->modify_order_request),sizeof(uint8_t)*(*len));
			break;
		case 'Q':
			*len = 1;
			buff = malloc(sizeof(uint8_t)*1);
			buff[0] = s->message_type;;
			break;
		default:
			printf("ERROR: Unknown message type %c\n",s->message_type);
			assert(0);
			break;
		}
	return buff;
}
