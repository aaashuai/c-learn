#include <stdio.h>

int main(void)
{
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
  printf("输入第一个数字:");
  scanf("%1d", &d);
  printf("输入第一组的五个数字:");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf("输入第二组的五个数字:");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;
  // printf("校验位:%d\n", 9 - ((total - 1) % 10));
  printf("校验位:%d\n", 10 - (total % 10);
  return 0;
}
