// Hot-blood C Lecture examination Chapter 3-1 Second Test
// Name : c03-01-01
// Goal : Understanding Variable and Operators
// Author : Drake
// License : Public Domain
// Date : August. 8. 2013

#include <stdio.h>

int main(int argc, char* argv[])
{
	int num1, num2, num3;
	if(argc < 4)
	{
		printf("Input num1 num2 num3: ");
		scanf("%d %d %d", &num1, &num2, &num3);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		num3 = atoi(argv[3]);
	}
	printf("%d x %d x %d = %d\n", num1, num2, num3, num1 * num2 * num3);
	return 0;
}
