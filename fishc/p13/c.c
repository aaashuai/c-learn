#include <stdio.h>

int main(int argc, char *argv[]) {
  int count;
  char ch;

  printf("please input some letter: ");

  while ((ch = getchar()) != '\n') {
    if (ch >= 65 && ch <= 91) {
      count++;
    }
  }
  printf("totaly %d upper letter\n", count);

  return 0;
}
