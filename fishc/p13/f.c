#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int ch;
  long long num = 0;
  long long temp;
  int is_overflow = 0;

  const int max_int = pow(2, sizeof(int) * 8) / 2 - 1;
  const int min_int = pow(2, sizeof(int) * 8) / 2 * (-1);

  printf("input letters: ");

  do {
    ch = getchar();
    if (ch >= '0' && ch <= '9') {
      temp = 10 * num + (ch - '0');
      if (temp > max_int || temp < min_int) {
        is_overflow = 1;
        break;
      } else {
        num = temp;
      }
    } else if (num) {
      break;
    }
  } while (ch != '\n');
  if (is_overflow) {
    printf("数值超出范围, 结果未定义!\n");
  } else {
    if (!num) {
      printf("并未找到任何数值!\n");
    } else {
      printf("结果是: %lld\n", num);
    }
  }

  return 0;
}
