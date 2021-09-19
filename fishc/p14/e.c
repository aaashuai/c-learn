#include <stdio.h>

int main(int argc, char *argv[]) {
  int sum = 0;
  char num;

  while (1) {
    printf("请输入合法的数字: ");
    scanf("%c", &num);
    if (num == 'q') {
      break;
    }
    sum += num - '0';
    while ((num = getchar()) != '\n')
      ;
  }
  printf("sum: %d\n", sum);

  return 0;
}
