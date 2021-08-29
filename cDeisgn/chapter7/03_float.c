#include <stdio.h>

int main(void)
{
  float f, frac_part;
  f = 3.423352f;
  frac_part = f - (int)f;
  printf("%f", frac_part);
  return 0;
}
