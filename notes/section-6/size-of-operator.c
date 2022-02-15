/**
 * @file size-of-operator.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-02-14
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("Type char occupy %lu\n", sizeof(char));
  printf("Type short occupy %lu\n", sizeof(short));
  printf("Type int occupy %lu\n", sizeof(int));
  printf("Type long occupy %lu\n", sizeof(long));
  printf("Type long long occupy %lu\n", sizeof(long long));
  printf("Type float occupy %lu\n", sizeof(float));
  printf("Type double occupy %lu\n", sizeof(double));
  printf("Type long double occupy %lu\n", sizeof(long double));
  return 0;
}