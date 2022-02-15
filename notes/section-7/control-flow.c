/**
 * @file control-flow.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-02-14
 *
 * @copyright Copyright (c) 2022
 *
 * if statements
 *
 *
 *
 */
#include <stdio.h>
#include <stdbool.h>
int main()
{
  int number, sign;
  printf("Type a number:\n");
  scanf("%i", &number);

  // if (number < 0)
  // {
  //   sign = -1;
  // }
  // else if (number == 0)
  // {
  //   sign = 0;
  // }
  // else
  //   sign = 1;
  number < 0 ? sign = -1 : number == 0 ? sign = 0
                                       : 1;
  printf("Sign = %i\n", sign);
  return 0;
}