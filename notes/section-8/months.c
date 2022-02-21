#include <stdio.h>
#define MONTHS 12

int main()
{
  // int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 30, 31};
  // int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
  // for (int i = 0; i < MONTHS; i++)
  // {
  //   printf("Month %d has %d days\n", i + 1, days[i]);
  // }
  int array_values[10] = {0, 1, 4, 9, 16};
  int i;
  for (i = 5; i < 10; ++i)
  {
    array_values[i] = i * i;
  }
  for (i = 0; i < 10; i++)
  {
    printf("array_values[%i] = %i\n", i, array_values[i]);
  }
  return 0;
}