#include <SREC.h>

uint8_t check_Hexa(uint8_t check)
{
	uint8_t temp = 0;
	
	temp = (check >= '0' && check <= '9') || ((check >= 'A') && (check <= 'F'));

	return temp;
}

uint8_t HexToDec(uint8_t num)
{
	uint8_t temp = 0;
	
	if(check_Hexa(num) == 1)
	{
		temp = num - 48;
	}
	else
	{
		temp = -1;
	}
	
	return temp;
}

uint8_t select(uint8_t* a)
{
	record->byteCount = Hex_To_Dec(a[2]) * HEX + Hex_To_Dec(a[3]) << 8;
	
	switch(Hex_To_Dec(a[1]))
	{
		case 0:
			record->address_size = 2;
			record->data_index = record->address_size * 2 + ADDRESS_INDEX;
			record->data_size = record->byteCount - record->address_size - 1;
			checkSrec(a);
			break;
		case 1:
			record->address_size = 2;
			record->data_index = record->address_size * 2 + ADDRESS_INDEX;
			record->data_size = record->byteCount - record->address_size - 1;
			checkSrec(a);
			break;
		case 2 :
			record->address_size = 3;
			record->data_index = record->address_size * 2 + ADDRESS_INDEX;
			record->data_size = record->byteCount - record->address_size - 1;
			checkSrec(a);
			break;
		case 3:
			record->address_size = 4;
			record->data_index = record->address_size * 2 + ADDRESS_INDEX;
			record->data_size = record->byteCount - record->address_size - 1;
			checkSrec(a);
			break;
		case 9:
			record->address_size = 2;
			record->data_index = record->address_size * 2 + ADDRESS_INDEX;
			record->data_size = record->byteCount - record->address_size - 1;
			checkSrec(a);
			break;
		case 8:
			record->address_size = 3;
			record->data_index = record->address_size * 2 + ADDRESS_INDEX;
			record->data_size = record->byteCount - record->address_size - 1;
			checkSrec(a);
			break;
		case 7:
			record->address_size = 4;
			record->data_index = record->address_size * 2 + ADDRESS_INDEX;
			record->data_size = record->byteCount - record->address_size - 1;
			checkSrec(a);
			break;
		default:
			//error();
	}
	

	return checkSrec(a);
}

uint8_t checkSrec(uint8_t a[])
{
	uint8_t move = 0, index = 0;
	uint8_t sum = 0;
	uint8_t lineLenght = sizeof(a[]);
	
	
	if(a[0] != 'S')
	{
		//error(S_INVALID);
	}
	else
	{
		check = 1;
	}
	
	for(index = 2; index <= BYTECOUNT + 1; index ++)
	{
		if(check == 1 && (hexaToDec(a[index]) == -1))
		{
			check = 0;
			//error(CHAR_INVALID);
			index = BYTECOUNT_TO_ADRESS + 1;
		}
		else
		{
			/* do nothing */
		}
	}
	
	
	
	switch(record->address_size)
	{
		case 2:
			move = 8;
				
			for(index = 0; index < (record->address_size); index ++)
			{
				if(move >= 0)
				{
					record->address |= (HexToDec(a[ADDRESS_INDEX + index * TWO_HEX_DIGITS]) * HEX + HexToDec(a[ADDRESS_INDEX + index * TWO_HEX_DIGITS + 1])) << move;
					sum |= (HexToDec(a[ADDRESS_INDEX + index * TWO_HEX_DIGITS]) * HEX + HexToDec(a[ADDRESS_INDEX + index * TWO_HEX_DIGITS + 1]));
					move -= 8;
				}
				else
				{
					
				}
			}	
						
			break;
		case 3:
			move = 16;
				
			for(index = 0; index < (record->address_size); index ++)
			{
				if(move >= 0)
				{
					/* big endian */
					record->address |= (HexToDec(a[ADDRESS_INDEX + index * TWO_HEX_DIGITS]) * HEX + HexToDec(a[ADDRESS_INDEX + index * TWO_HEX_DIGITS + 1])) << move;
					/* little endian */
					sum |= (HexToDec(a[ADDRESS_INDEX + index * TWO_HEX_DIGITS]) * HEX + HexToDec(a[ADDRESS_INDEX + index * TWO_HEX_DIGITS + 1]));
					move -= 8;
				}
				else
				{
					
				}
			}
					
			break;
		case 4:
			move = 24;
				
			for(index = 0; index < (record->address_size); index ++)
			{
				if(move >= 0)
				{
					record->address |= (HexToDec(a[ADDRESS_INDEX + index * TWO_HEX_DIGITS]) * HEX + HexToDec(a[ADDRESS_INDEX + index * TWO_HEX_DIGITS + 1])) << move;
					sum |= (HexToDec(a[ADDRESS_INDEX + index * TWO_HEX_DIGITS]) * HEX + HexToDec(a[ADDRESS_INDEX + index * TWO_HEX_DIGITS + 1]));
					move -= 8;
				}
				else
				{
					
				}
			}
				
			break;
		default:
			break;
	}
	
	if((lineLenght - record->address_size - 3) != record->data_size)
	{
		check = 0;
		error(DATA_LENGTH_INVALID);
	}
	else
	{
		record->data = (uint8_t*)malloc(record->data_size * uint8_t);
		for(index = 0; index < record->data_size; index ++)
		{
			if((hexaToDec(a[record->data_index + index * TWO_HEX_DIGITS]) == -1) || (hexaToDec(a[record->data_index + 1 + index * TWO_HEX_DIGITS]) == -1))
			{
				check = 0;
				//error(DATA_CHAR_INVALID);
				index = data_size;
			}
			else
			{
				record->data[index] = Hex_To_Dec(a[record->data_index + index * TWO_HEX_DIGITS]) * HEX + Hex_To_Dec(a[record->data_index + 1 + index * TWO_HEX_DIGITS]);
				sum |= record->data[index];
			}
		}
		sum |= (record->byteCount);
		sum = (~sum + 1) & 0xFF;
		record->checkSum = (hexaToDec(line[lineLength - 2])) * HEX + (hexaToDec(line[lineLength - 1]));
	}
	
	if(check == 1 && record->checkSum != sum)
	{
		check = 0;
		//error(CHECKSUM_INVALID);
	}
	else
	{
		/* do nothing */
	}
	
	return check;
}

void de_init(srec* record)
{
	free(record->data);
}


uint8_t readAdress(void)
{
	return record->address;
}

void readData(uint8_t* c)
{
	uint8_t index = 0;
	
	for(index = 0; index < (record->data_size); index ++)
	{
		c[index] = record->data[index];
	}
}

