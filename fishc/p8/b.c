#include <stdio.h>
#define INCH 0.39370
#define POUND 2.204623

int main(void)
{
  char name[30];
  int height;
  float weight;

  printf("请输入您的姓名: ");
  scanf("%s", &name);
  printf("请输入您的身高(cm): ");
  scanf("%d", &height);
  printf("请输入您的体重(kg): ");
  scanf("%f", &weight);
  printf("=========正在为您转换==========\n");
  printf("%s的身高是%.2f(in), 体重是%.2f(lb)\n", name, height * INCH, weight * POUND);

  return 0;
}
