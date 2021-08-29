#include <stdio.h>
#include <math.h>

#define RATE_1 0.0175
#define RATE_2 0.0225
#define RATE_3 0.0275
#define RATE_5 0.0275

int main(void)
{
  float money = 10000.0;
  float result = 0;

  printf("%.2f\n", money * (1 + RATE_5 * 5));


  result = money * (1 + RATE_3 * 3) * (1 + RATE_2 * 2);
  printf("%.2f\n", result); 

  printf("%.2f\n", money * pow(1 + RATE_1, 5));

  return 0;
}
