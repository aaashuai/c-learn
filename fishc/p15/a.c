#include <stdio.h>

int main(int argc, char *argv[]) {

  double i = 5;
  int count;
  for (i = 10; i > 0; i /= 2) {
    printf("%f\n", i);
    count++;
  }
  printf("%d", count);

  return 0;
}
