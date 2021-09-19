#include <stdio.h>

int main() {
  float num = 0;
  double sum = 0;
  int status;

  do {
    printf("请输入合法的数字：");
    do {
      status = scanf("%f", &num);
      printf("num: %f", num);
      sum = sum + num;
    } while (getchar() != '\n' && status == 1);
  } while (status == 1);

  printf("结果是：%.2lf\n", sum);

  return 0;
}
