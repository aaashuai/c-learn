#include <stdio.h>

int main(int argc, char *argv[]) {
  char ch;
  int a_amount = 0;
  int e_amount = 0;
  int i_amount = 0;
  int o_amount = 0;
  int u_amount = 0;

  printf("请输入一个英文句子: ");

  while ((ch = getchar()) != '\n') {
    switch (ch) {
    case 'a':
    case 'A':
      a_amount++;
      break;
    case 'e':
    case 'E':
      e_amount++;
      break;
    case 'i':
    case 'I':
      i_amount++;
      break;
    case 'o':
    case 'O':
      o_amount++;
      break;
    case 'u':
    case 'U':
      u_amount++;
      break;
    }
  }
  printf("您输入的句子中, 包含元音字母%d个!\n", a_amount+e_amount+i_amount+o_amount + u_amount);
  printf("其中: a(%d),e(%d),i(%d),o(%d),u(%d)\n", a_amount, e_amount, i_amount, o_amount, u_amount);

  return 0;
}
