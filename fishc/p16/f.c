#include <stdio.h>

int main(int argc, char *argv[]) {
  float money = 400, spend = 50;
  float rate = 0.08;
  int count;

  while (money >= 0) {
    money -= spend;
    money += money * rate;
    count++;
  }
  printf("%d年之后, 破产...", count);
  return 0;
}
