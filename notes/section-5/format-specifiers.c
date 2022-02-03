#include <stdio.h>

int main(void)
{
  int integerVar = 100;
  float floatingVar = 332.12;
  double doubleVar = 8.33e+11;
  char charVar = 'W';
  float x = 3.444456;
  _Bool boolVar = 1;

  printf("integerVar = %i\n", integerVar);
  printf("floatingVar = %f\n", floatingVar);
  printf("doubleVar = %e\n", doubleVar);
  printf("charVar = %c\n", charVar);
  printf("boolVar = %i\n", boolVar);
  printf("%.2f", x);

  return 0;
};