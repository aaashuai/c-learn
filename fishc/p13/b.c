#include <stdio.h>

int main(int argc, char *argv[]) {
  int count = 0;

  printf("请输入一句话: ");

  while (getchar() != '\n') {
    count++;
  }
  printf("字符个数: %d\n", count);
  return 0;
}
