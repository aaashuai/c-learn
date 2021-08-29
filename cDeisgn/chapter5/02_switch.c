#include <stdio.h>

int main()
{
  
  int i = 2;
  switch (i){
    case 1:
    case 2:
    case 3:
      printf("case 1, 2, 3 %d\n", i);
      printf("case 1, 2, 3 %d\n", i);
      break;
    case 5:
      printf("case 5 %d\n", i);
      break;
    default:
      printf("do default\n");
      break;
  }
  return 0;
}
