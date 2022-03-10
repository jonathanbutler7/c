#include <stdio.h>

int gcd(int u, int v);
float squareRoot(float x);

float squareRoot(float x) {
  const float epsilon = .00001;
  float guess = 1.0;
  
  if (x < 0) {
    return -1.0
  }

  
}
int absoluteValue(float a)
{
  if (a < 0)
    return a * -1;
  return a;
}

int gcd(int u, int v)
{
  int temp;
  while (v != 0)
  {
    temp = u % v;
    u = v;
    v = temp;
  }
  return u;
}

// write a function that returns the square root of a number

int main()
{
  printf("%d", gcd(10, 20));
  return 0;
}