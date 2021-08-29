#include <stdio.h>

int main()
{
  
  //int i = 1;
  //while (i <= 128){
  //  printf("%d ", i);
  //  i *= 2;
  //}
  // for (int i = 1; i <= 128; i *= 2){
  //   printf("%d ", i);
  // }
  // int i = 9384;
  // do {
  //   printf("%d ", i);
  //   i /= 10;
  // } while (i>0);
  for (int i = 9384; i > 0; i /= 10){
    printf("%d ", i);
  }
  return 0;
}
