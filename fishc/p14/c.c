#include <stdio.h>

int main(int argc, char *argv[]) {
  char ch;
  printf("input some letters: ");

  for (ch = getchar(); ch != '\n'; ch = getchar()) {
    printf("%c\n", ch);
  }
  return 0;
}
