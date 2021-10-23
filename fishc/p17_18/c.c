#include <stdio.h>
#define IsLeap 1;
#define LeapYearDays 366;
#define NotLeapYearDays 365;

int isLeap(int year);
int getMonthDays(int year, int month);
int calcDaysDiff(int oYear, int oMonth, int oDay, int cYear, int cMonth, int cDay);


int main (int argc, char *argv[])
{
  int man_year, man_month, man_day;
  int this_year, this_month, this_day;
  int days = 0;
  int lived_days, still_live_days;
  

  printf("please input your birthday(1988-05-20): ");
  scanf("%d-%d-%d", &man_year, &man_month, &man_day);

  printf("please input date today(1988-05-20): ");
  scanf("%d-%d-%d", &this_year, &this_month, &this_day);

  lived_days = calcDaysDiff(man_year, man_month, man_day, this_year, this_month, this_day);
  printf("you lived %d days!\n", lived_days);
  still_live_days=calcDaysDiff(this_year, this_month, this_day, man_year+80, man_month, man_day);
  printf("if you can live to 80, you can still live %d days!\n", still_live_days);
  printf("you used %.2f, love your life\n", (double)lived_days * 100/(lived_days+still_live_days));
  return 0;
}


int isLeap(int year){
  if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0){
    return IsLeap;
  }
  return 0;
}

int getMonthDays(int year, int month){
  int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (isLeap(year)){
    month_days[1] = 29;
  }

  return month_days[month];
}


int calcDaysDiff(int oYear, int oMonth, int oDay, int cYear, int cMonth, int cDay){
  int days = 0;

  if (oYear > cYear){
    printf("not a valid year!\n");
    return 1;
  }
  for (int i = oYear; i<cYear; i++){
    if (isLeap(i) == 1){
      days += LeapYearDays;
    } else {
      days += NotLeapYearDays;
    }
  }

  if (oMonth < cMonth){
    for (int i = oMonth; i<cMonth;i++){
      days += getMonthDays(cYear, i);
    }
  } else {
    for (int i = cMonth; i<oMonth;i++){
      days -= getMonthDays(cYear, i);
    }
  }

  if (oDay < cDay){
    days += (cDay - oDay);
  } else {
    days -= (cDay - oDay);
  }

  return days;
}
