// Hot-blood C Lecture examination Chapter 3-1 First Test
// Name : c03-01-00
// Goal : Understanding Variable & Operator
// Author : Drake
// License : Public Domain
// Date : August. 8. 2013

#include <stdio.h>

int main(int argc, char* argv[])
{
	int num1, num2;
	if(argc < 3)
	{
		printf("Input num1 num2: ");
		scanf("%d %d", &num1, &num2);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
	}
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d x %d = %d\n", num1, num2, num1 * num2);
	return 0;
}
