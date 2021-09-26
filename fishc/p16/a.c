#include <stdio.h>

int main(int argc, char *argv[]) {
  int a, b, c;
  a = (b = 3, 4, c = b++ + 5, ++c + ++b);
  printf("a=%d,b=%d,c=%d\n", a, b, c);
  return 0;
}
