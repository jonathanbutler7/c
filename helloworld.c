#include <stdio.h>
// stdio means standard input/output
// #include "stdio.h" would mean it will look first in the current directory for a user defined lib
int another()
{
  printf("Here is another one");
  return 0;
}
int main()
{
  // cmd + shift + b will recompile after making changes
  /* 
  multi line comments 
  look like this
  */
  printf("Hello world!\n");
  printf("Goodbye world!\n");
  another();
  another();
  return 0;
}
// ctrl + opt + n will compile and give terminal with one command using Code Runner
