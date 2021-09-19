#include <stdio.h>

int main(int argc, char *argv[]) {
  int startup = 23;
  int step = 14;
  printf("公斤 -- 花费(元):");
  for (int i = 1; i <= 20; i++) {
    printf("%-2d -- %3d\n", i, (i - 1) * 14 + 23);
  }
  return 0;
}
