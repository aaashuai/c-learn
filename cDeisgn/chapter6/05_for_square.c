#include <stdio.h>

int main()
{
  
  int i, n;
  printf("show you a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  for (i=1; i<n; i++){
    printf("%10d%10d\n", i, i*i);
  }

  return 0;
}
