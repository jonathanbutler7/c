#include <stdio.h>
// stdio means standard input/output
// #include "stdio.h" would mean it will look first in the current directory for a user defined lib

// cmd + shift + b will recompile after making changes
// ctrl + opt + n will compile and give terminal with one command using Code Runner
int main()
{
  char str[100];
  int i;
  printf("Enter a letter then a number:");

  scanf("%s %d", str, &i);

  printf("\nYou entered: letter %s, and then number %d\n", str, i);

  return 0;
  // double _x;
  // scanf("%lf", &_x);
}
