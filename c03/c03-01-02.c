// Hot-blood C Lecture examination Chapter 3-1 Third Test
// Name : c03-01-02
// Goal : Understanding Variable and Operators
// Author : Drake
// License : Public Domain
// Date : August. 8. 2013

#include <stdio.h>

int main(int argc, char* argv[])
{
	int num1;
	if(argc < 2)	{
		printf("Input num1: ");
		scanf("%d", &num1);
	}
	else	{
		num1 = atoi(argv[1]);
	}
	printf("Square of %d = %d\n", num1, num1*num1);
	return 0;
}
