#include <stdio.h>

int main(void)
{
  // int i = 5, j = 3;
  // printf("%d %d", i / j, i % j);  // 1, 2
  // int i = 2, j = 3;
  // printf("%d", (i + 10) % j);  // 0
  int i = 7, j = 8, k = 9;
  printf("%d", (i + 10) % k / j);  // 1
  return 0;
}
