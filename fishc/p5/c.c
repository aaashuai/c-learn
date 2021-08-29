#include <stdio.h>

#define PI 3.1415926
#define S(r) PI * r * r
#define C(r) PI * r * 2


int main(int argc, char const* argv[])
{
  int r = 5;

  printf("半径为%d的圆, 面积是: %.2f, 周长是: %.2f\n", r, S(r), C(r));
  
  return 0;
}
