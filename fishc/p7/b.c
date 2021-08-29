#include <stdio.h>
#include <math.h>

int main()
{
  int num;
  printf("please input a number: ");
  scanf("%d", &num);
  printf("%d的5次方是: %.2f\n", num, pow(num, 5));
  return 0;
}
