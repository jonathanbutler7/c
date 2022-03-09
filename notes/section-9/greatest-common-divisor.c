#include <stdio.h>

int gcd(int a, int b)
{
  // Everything divides 0
  if (a == 0)
    return b;
  if (b == 0)
    return a;

  // base case
  if (a == b)
    return a;

  // a is greater
  if (a > b)
    return gcd(a - b, b);
  return gcd(a, b - a);
}

int absoluteValue(float a)
{
  if (a < 0)
    return a * -1;
  return a;
}

// write a function that returns the square root of a number

int main()
{
  int result = absoluteValue(-5);
  printf("%d", result);
  return 0;
}