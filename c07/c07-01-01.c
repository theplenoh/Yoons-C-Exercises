// Hot-Blood C Lecture Examination Chapter 7-1 First Test
// Name : c07-01-01
// Goal : input a number from user, print "Hello World" inputted times
// Author : Drake
// License : Public Domain
// Date : April. 18. 2014

#include <stdio.h>

int main(int argc, char* argv[])
{
  int num, loop;
  loop = 0;
  printf("Input Number :"); scanf("%d", &num);
  if(num <= 0)
  {
    puts("Input Error!");
    return -1;
  }
  else
  {
    while(loop < num)
    {
      puts("Hello World!");
      loop++;
    }
  }
  return 0;
}
