#include <stdio.h>

int main(int argc, char *argv[])
{
  int numberOfArgs = argc;
  char *arg1 = argv[0];
  char *arg2 = argv[1];

  printf("Number of args: %d\n", numberOfArgs);
  printf("Arg 1 is program name: %s\n", arg1);
  printf("Arg 2 is CL arg: %s\n", arg2);

  return 0;
}