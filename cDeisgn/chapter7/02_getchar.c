#include <stdio.h>

int main(int argc, char *argv[])
{
  
  int len = 0;
  printf("Enter your message:");
  while (getchar() != '\n')
    len++;
  printf("Your message was %d character(s) long.\n", len);
  return 0;
}
