#include <stdio.h>

#define DEGREE_F2C(f) (f-32) * 5 / 9

int main(void)
{
  float f;
  printf("请输入华氏度: ");
  scanf("%f", &f);
  printf("转换为摄氏度是: %.2f", DEGREE_F2C(f));
  return 0;
}
