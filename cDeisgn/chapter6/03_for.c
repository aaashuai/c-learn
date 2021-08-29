#include <stdio.h>

int main()
{
  int j = 5;
  int i;
  int k;
  for (i++; j > 0; k = 3){
    printf("i: %d j: %d k: %d\n", i, j, k);
    j--;
  }
  
  return 0;
}
