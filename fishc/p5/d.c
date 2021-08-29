#include <stdio.h>

#define TOMATO 3.7
#define KALE 7
#define CELERY 1.3
#define CABBAGE 8
#define ONION 2.4
#define RAPESEED 9
#define CUCUMBER 6.3
#define RADISH 0.5

int main()
{
  printf("小明需要支付%.2f\n", TOMATO+0.5*CABBAGE+0.5*RAPESEED);
  printf("小红需要支付%.2f\n", 1.5*CELERY+0.25*ONION+2.5*CUCUMBER);
  printf("小甲鱼需要支付%.2f\n", 5*CUCUMBER+10*RADISH);
  return 0;
}
