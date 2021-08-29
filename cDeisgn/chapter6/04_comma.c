#include <stdio.h>

int main()
{
  int i = 3, j = 4, k;
  k = (i++, j + i);
  printf("%d\n", k);
  return 0;
}
