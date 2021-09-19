#include <stdio.h>

int main(int argc, char *argv[]) {

  for (int i = 1; i <= 9; i++) {
    for (int k = 1; k <= i - 1; k++) {
      printf("        ");
    }
    for (int j = i; j <= 9; j++) {
      printf("%d*%d=%-2d  ", i, j, i * j);
    }
    printf("\n");
  }
  return 0;
}
