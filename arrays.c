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
  int counters[5] = {0, 1, 2, 3, 4};
  float sample_data[500] = {100.0, 2000.3, 400.5};
  // ^^ initializes first 3 values and sets rest to 0
  float sample_data[500] = {[2] = 100.0, [1] = 2000.3, [0] = 400.5};
  // diff syntax but ^^ same as above
  int arr[6] = {[5] = 212}; // initializes 5, and sets others to 0
  return 0;
}