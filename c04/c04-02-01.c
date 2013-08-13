// Hot-blood C Lecture examination Chapter 4-2 Second Test
// Name : c04-02-01
// Goal : Understanding Binary & Hexadecimal
// Author : Drake
// License : Public Domain
// Date : August. 13. 2013

#include <stdio.h>

int main(int argc, char* argv[])
{
	int i, d[8];
	char b00000001[]="00000001";
	char b00000010[]="00000010";
	char b00000100[]="00000100";
	char b00001000[]="00001000";
	char b00010000[]="00010000";
	char b00100000[]="00100000";
	char b01000000[]="01000000";
	char b10000000[]="10000000";
	for(i = 0; i < 8; i++)
		d[i] = 0;
	for(i = 0; i < 8; i++)
	{
		if(b00000001[(7 - i)] > '0')
			d[0] += 1 << i;
		if(b00000010[(7 - i)] > '0')
			d[1] += 1 << i;
		if(b00000100[(7 - i)] > '0')
			d[2] += 1 << i;
		if(b00001000[(7 - i)] > '0')
			d[3] += 1 << i;
		if(b00010000[(7 - i)] > '0')
			d[4] += 1 << i;
		if(b00100000[(7 - i)] > '0')
			d[5] += 1 << i;
		if(b01000000[(7 - i)] > '0')
			d[6] += 1 << i;
		if(b10000000[(7 - i)] > '0')
			d[7] += 1 << i;
	}
	printf("b00000001 = %d\n", d[0]);
	printf("b00000010 = %d\n", d[1]);
	printf("b00000100 = %d\n", d[2]);
	printf("b00001000 = %d\n", d[3]);
	printf("b00010000 = %d\n", d[4]);
	printf("b00100000 = %d\n", d[5]);
	printf("b01000000 = %d\n", d[6]);
	printf("b10000000 = %d\n", d[7]);
	
	return 0;
}
