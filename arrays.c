#include <stdio.h>

/**
 * @brief no arrays with multiple data types
 *
 * @return int
 */
int main()
{
  int grades[10];
  int count = 10;
  long sum = 0;
  float average = 0.0f;

  printf("Enter the 10 grades: \n");

  for (int i = 0; i < count; i++)
  {
    printf("%2u> ", i + 1);
    scanf("%d", &grades[i]);
    sum += grades[i];
  }
  average = (float)sum / count;

  printf("Avg is %.2f\n", average);
  return 0;
}