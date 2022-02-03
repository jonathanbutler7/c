#include <stdio.h>
// stdio means standard input/output
// #include "stdio.h" would mean it will look first in the current directory for a user defined lib

// cmd + shift + b will recompile after making changes

int main()
{
  char str[100];
  int i;

  scanf("%s %d", str, &i);

  printf("\nYou entered: %s %d\n", str, i);

  return 0;
}
// ctrl + opt + n will compile and give terminal with one command using Code Runner
