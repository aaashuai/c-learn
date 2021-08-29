#include <stdio.h>

int main(int argc, char const* argv[])
{
  int count = 0;

  printf("Enter a Message: ");
  while (getchar() != '\n'){
    count ++;
  }
  printf("Your message was %d character(s) long.", count);

  return 0;
}
