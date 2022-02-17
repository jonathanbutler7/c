#include <stdio.h>

int main()
{
  // for (int i = 1; i < 11; i++)
  // {
  //   i == 1 ? printf("%d", i) : printf(", %d", i);
  // }

  // for (int i = 1, j = 2; i <= 5; ++i, j = j + 2)
  // {
  //   printf(" %2d", i * j);
  // }

  unsigned int sum = 0;
  unsigned int count = 0;

  printf("Enter number of integerrs you want to sum: ");
  scanf("%u", &count);

  unsigned int i;
  for (i = 1; i <= count; ++i)
  {
    printf("inside loop");
    sum += 1;
  }

  printf("\nTotal number of first %u numbers is %u\n", count, sum);

  return 0;
}