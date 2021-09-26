#include <stdio.h>

int main(int argc, char *argv[]) {
  float cost = 2.0, size = 11.0, flag, bill;

  if (size > 12) {
    goto a;
  }
  goto b;
a:
  cost = cost * 1.05;
  flag = 2;
  printf("cost: %f, flag: %f, bill: %f", cost, flag, bill);
b:
  bill = cost * flag;
  printf("cost: %f, flag: %f, bill: %f", cost, flag, bill);

  return 0;
}
