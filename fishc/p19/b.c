#include <stdio.h>
#include <string.h>


int main (int argc, char *argv[])
{
  char str[21];
  char cStr;
  int strLength = 20;
  int index = 0;
  int spaceIndex = 0;

  printf("input text: ");
  while ((cStr = getchar()) && '\n' != cStr){
      if (index < strLength){
        if (' ' == cStr){
            spaceIndex = index;
        }
        str[index] = cStr;
      }
      index++;
  }
  if (0 != spaceIndex && index > strLength){
      str[spaceIndex] = '\0';
  }

  printf("text: %s\n", str);

  return 0;
}
