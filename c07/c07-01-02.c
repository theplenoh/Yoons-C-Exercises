// Hot-Blood C Lecture Examination Chapter 7-1 Second Test
// Name : c07-01-02
// Goal : print 3x multiple inputted value
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
      printf("%d x 3 = %d\n", loop + 1, (loop + 1) * 3);
      loop++;
    }
  }
  return 0;
}
