#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int sign = 1;
  double pi = 0.0, n = 1, term = 1.0;

  while (fabs(term) >= pow(10, -8)) {
    pi = pi + term;
    n = n + 2;
    sign = -sign;
    term = sign / n;
  }
  pi = pi * 4;
  printf("pi = %10.7f\n", pi);

  return 0;
}
