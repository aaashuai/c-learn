#include <stdio.h>

int main(int argc, char *argv[]) {
  float start = 10000;
  float c_total = start, h_total = start;
  float s_rate = 0.1, c_rate = 0.05;
  int count;

  while (c_total >= h_total) {
    c_total += start * s_rate;
    h_total = h_total * (1 + c_rate);
    count++;
  }
  printf("%d年后, 黑夜超过小甲鱼!", count);
  printf("小甲鱼投资额度: %.2f\n", c_total);
  printf("黑夜投资额度: %.2f\n", h_total);

  return 0;
}
