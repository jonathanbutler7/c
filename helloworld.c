#include <stdio.h>
// stdio means standard input/output
// #include "stdio.h" would mean it will look first in the current directory for a user defined lib

int main()
{
  // cmd + shift + b will recompile after making changes
  /* 
  multi line comments 
  look like this
  */
  // char str[100];
  int i;
  printf("Enter a value:");

  scanf("%d", &i);

  printf("\nYou  entered: %d\n", i);

  return 0;
}
// ctrl + opt + n will compile and give terminal with one command using Code Runner
