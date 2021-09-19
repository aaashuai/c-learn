#include <stdio.h>

int main(int argc, char *argv[]) {
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9 - i; j++) {
      printf("        ");
    }
    for (int k = 1; k <= i; k++) {
      printf("%d*%d=%-2d  ", i, k, i * k);
    }
    printf("\n");
  }
  return 0;
}
