#include <stdio.h>

int main(int argc, char *argv[]) {
  int number = 10000;
  int is_prime;
  int amount = 0;

  for (int i = 2; i < number; i++) {
    is_prime = 1;
    for (int j = 2; j < i / 2; j++) {
      if ((i % j) == 0) {
        is_prime = 0;
        break;
      }
    }
    if (is_prime) {
      amount++;
    }
  }
  printf("10000内共有%d个素数!\n", amount);

  return 0;
}
