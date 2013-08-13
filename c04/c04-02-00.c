// Hot-blood C Lecture examination Chapter 4-2 First Test
// Name : c04-02-00
// Goal : Understanding Binary & Hexadecimal
// Author : Drake
// License : Public Domain
// Date : August. 13. 2013

#include <stdio.h>

int main(int argc, char* argv[])
{
	long long int b1, b2, b4, b8, b32;
	b1 = 1 << 1;
	b2 = 1 << 2;
	b4 = 1 << 4;
	b8 = 1 << 8;
	b32 = 1 << 16;
	b32 = b32 << 16;
	printf("1bit can %lld kind of number figure out\n", b1);
	printf("2bit can %lld kind of number figure out\n", b2);
	printf("4bit can %lld kind of number figure out\n", b4);
	printf("8bit can %lld kind of number figure out\n", b8);
	printf("32bit can %lld kind of number figure out\n", b32);
	return 0;
}
