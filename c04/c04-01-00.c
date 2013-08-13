// Hot-blood C Lecture examination Chapter 4-1 First Test
// Name : c04-01-00
// Goal : Understanding binary, hexadecimal
// Author : Drake
// License : Public Domain
// Date : August. 8. 2013

#include <stdio.h>

char* int2bin(int dec);

int main(int argc, char* argv[])
{
	int i;
	for(i = 8; i <= 20; i++)
		printf("Decimal : %02d, Binary : %s, Hexadecimal : %02X\n", i, int2bin(i), i);
	return 0;
}

char* int2bin(int dec)
{
	static char bin[33];
	int i, j;
	for(i = 0; i < 32; i++)
		if(dec & (1 << i))
			bin[31 - i] = '1';
		else
			bin[31 - i] = '0';
	bin[32] = '\0';
	return bin;
}
