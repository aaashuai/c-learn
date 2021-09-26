#include <stdio.h>

int main(int argc, char *argv[]) {
  int score = 0, count = 0;

  while (1) {
    scanf("%d", &score);
    if (score < 0) {
      printf("count=%d\n", count);
      return 0;
    }
    count++;
  }
  return 0;
}
