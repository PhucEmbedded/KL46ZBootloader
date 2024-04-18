#include <stdint.h>

#define MAX 1000
#define HEX 16
#define ADDRESS_INDEX 4
#define BYTECOUNT 2


static typedef struct
{
	uint8_t type;
	uint8_t byteCount;
	uint32_t address;
	uint8_t address_size;
	uint8_t* data;
	uint8_t data_index;
	uint8_t data_size;
	uint8_t checkSum;
}srec;

srec *record;

uint8_t check_Hexa(uint8_t check);

uint8_t HexToDec(uint8_t num);

uint8_t select_Srec(uint8_t a[]);

uint8_t checkSrec(uint8_t a[]);

void de_init(srec* record);

void readAdress(uint8_t a[], uint8_t b[]);

void readData(uint8_t a[], uint8_t c[]);

