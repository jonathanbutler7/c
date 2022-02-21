#include <stdio.h>

int main()
{
  int n = 5;
  int m = 8;
  float a1[5];         // yes
  float a2[5 * 2 + 1]; // yes
  float a5[0];         // no
  float a8[n];         // not allowed before c99 (VLA)
  float a7[(int)2.5];  // yes
  return 0;
}