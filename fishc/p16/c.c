#include <stdio.h>

int main(int argc, char *argv[]) {
  int score = 0, count = 0;

readin:
  scanf("%d", &score);

  if (score < 0) {
    goto stage2;
  }
  count++;
  goto readin;

stage2:
  printf("count = %d\n", count);

  return 0;
}
