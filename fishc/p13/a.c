#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 1;
  int sum;
  while (i <= 100) {
    sum += i;
    i++;
  }
  printf("sum: %d\n", sum);
  return 0;
}
