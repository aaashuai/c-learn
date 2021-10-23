#include <stdio.h>


int main (int argc, char *argv[])
{
  int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int year;

  printf("please input a year: ");
  scanf("%d", &year);

  
  if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0){
    month_days[1] = 29;
  }

  for (int i=0; i<12; i++){
    printf("%d month: %d days\n", i+1, month_days[i]);
  }

  return 0;
}
