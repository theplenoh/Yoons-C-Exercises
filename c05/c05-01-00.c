#include <stdio.h>
int main(int argv, char* argc[])
{
  int x1, y1, x2, y2;
  printf("좌상단 x y :"); scanf("%d %d", &x1, &y1);
  printf("우하단 x y :"); scanf("%d %d", &x2, &y2);
  printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n", (x2-x1) * (y2-y1));
  return 0;
}
