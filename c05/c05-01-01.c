#include <stdio.h>

int main(int argc, char* argv[])
{
  double x, y;
  printf("input x y:"); scanf("%lf %lf", &x, &y);
  printf("x + y = %lf\n", x + y);
  printf("x - y = %lf\n", x - y);
  printf("x * y = %lf\n", x * y);
  printf("x / y = %lf\n", x / y);
  return 0;
}
