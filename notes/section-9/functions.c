#include <stdio.h>

// void printMessage(void);
// void addNumbers();

// void addNumbers(int x, int y)
// {
//   int result = x + y;
//   printf("%d + %d = %d\n", x, y, result);
// }

// /**
//  * @brief
//  *
//  * @return int
//  */
// int main()
// {

//   addNumbers(10, 20);
//   addNumbers(1, 4);
//   return 0;
// }

int addNumbers(int x, int y)
{
  return x + y;
}

int main(void)
{
  int result = addNumbers(10, 20);
  printf("result is %d\n", result);
  return 0;
}