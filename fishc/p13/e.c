#include <stdio.h>

// int main(int argc, char *argv[]) {
//   char ch;
//   int flag = 0;
//   int is_letter = 0;
//
//   printf("input some en letters: ");
//
//   while ((ch = getchar()) != '\n') {
//     is_letter = ch >= '0' && ch <= '9';
//     if (flag == 1 && !is_letter) {
//       break;
//     } else if (is_letter) {
//       putchar(ch);
//       flag = 1;
//     }
//   }
//   putchar('\n');
//   return 0;
// }
int main(int argc, char *argv[]) {
  int ch;
  int num = 0;

  printf("input some en letters: ");
  do {
    ch = getchar();
    if (ch >= '0' && ch <= '9') {
      num = 10 * num + (ch - '0');
    } else if (num) {
      break;
    }
  } while (ch != '\n');
  printf("result: %d\n", num);
  return 0;
}
