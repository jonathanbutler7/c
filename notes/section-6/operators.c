/**
 * @file operators.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-02-05
 *
 * @copyright Copyright (c) 2022
 * something
 *
 * declaration int Jason;
assignment : Jason = 5;
Function call statement : printf("Jason");
Structure statement : while (Jason < 20) Jason = Jason + 1;
return statement : return 0;

C considers any expression to be a statement if you append a semicolon 8;
3 - 4;
^^valid
 */

// int index = 0;
// int main()
// {

//   while (index < 20)
//   {
//     printf("hello");
//     index = index + 1;
//   }
// }

/**
 * @brief
 * arithmetic, logical, assignment, relational operators
 *
 * logical is "boolean operator"
 * assignment assigns val at right to val on left
 * relation compares operators against each other
 *
 * bitwise and shift operators
 * a bit is a 0 or 1 value. 8 of those make up a byte
 * 4 bytes = 32 bits (32 0 or 1 values)
 *
 */
#include <stdio.h>

int main()
{
  unsigned int a = 60; // 0011 1100
  unsigned int b = 13; // 0000 1101
  // int result = 0;

  // result = a | b; // 61
  // result = a & b; // 12
  // result = a ^ b; // 49
  int result = a << 2;
  // printf("result %d", result);
  printf("%lu", sizeof result);
  return 0;
}