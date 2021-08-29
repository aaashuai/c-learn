#include <stdio.h>
#include <math.h>

int main()
{
  int i;
  unsigned long long int sum = 0;
  unsigned long long int temp, weight;

  for (i=0; i < 64; i++)
  {
    temp = pow(2, i);
    printf("%llu\n", temp);
    sum = sum + temp;
  }
  weight = sum / 25000;
  
  printf("舍罕王应该给予达依尔%llu粒麦子\n", sum);
  printf("如果每25000粒麦子重1kg, 那么舍罕王应该给予达依尔%llu公斤麦子!\n", weight);
  return 0;
}
