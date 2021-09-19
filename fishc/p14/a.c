#include <stdio.h>

int main(int argc, char *argv[]) {
  int number;
  int is_prime = 1;

  printf("input number: ");
  scanf("%d", &number);

  for (int i = 2; i < number; i++) {
    if ((number % i) == 0) {
      printf("不是素数\n");
      is_prime = 0;
      break;
    }
  }
  if (is_prime) {
    printf("是素数\n");
  }

  return 0;
}
