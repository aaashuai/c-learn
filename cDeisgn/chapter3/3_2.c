#include <stdio.h>
int main(int argc, char const* argv[])
{
  printf("%-8.1e\n", 8.33);
  printf("%10.6e\n", .99999999999);
  printf("%-8.3f\n", 13.22222);
  printf("%6.0f\n", 13.22222);
  return 0;
}
