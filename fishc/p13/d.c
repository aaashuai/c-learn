#include <stdio.h>

int main(int argc, char *argv[]) {
  char ch;

  printf("please input some en letters: ");

  while ((ch = getchar()) != '\n') {
    if (ch >= 'A' && ch <= 'Z') {
      putchar(ch + 32);
    } else if (ch >= 'a' && ch <= 'z') {
      putchar(ch - 32);
    } else {
      putchar(ch);
    }
  }
  putchar('\n');

  return 0;
}
