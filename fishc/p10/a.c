#include <stdio.h>

int main(void)
{
  int year;
  int is_leap;
  while (1){
    printf("输入年份: ");
    scanf("%d", &year);
    is_leap = (!(year % 4) && year % 100) || !(year % 400);

    if (year == 0){
      break;
    }else if (is_leap){
      printf("是闰年\n");
    } else {
      printf("no no no\n");
    }
  }
  return 0;
}
