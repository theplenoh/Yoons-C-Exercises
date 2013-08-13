// Hot-blood C Lecture examination Chapter 4-2 Third Test
// Name : c04-02-02
// Goal : Understanding Binary & Hexadecimal
// Author : Drake
// License : Public Domain
// Date : August. 13. 2013

#include <stdio.h>

int main(int argc, char* argv[])
{
	int i, d[3];
	char b0[]="00010001";
	char b1[]="10100010";
	char b2[]="11110111";
	for(i = 0; i < 3; i++)
		d[i] = 0;
	for(i = 0; i < 8; i++)
	{
		if(b0[(7 - i)] > '0')
			d[0] += 1 << i;
		if(b1[(7 - i)] > '0')
			d[1] += 1 << i;
		if(b2[(7 - i)] > '0')
			d[2] += 1 << i;
	}
	printf("b%s = %d\n", b0, d[0]);
	printf("b%s = %d\n", b1, d[1]);
	printf("b%s = %d\n", b2, d[2]);
	
	return 0;
}
