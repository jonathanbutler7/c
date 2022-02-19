#include <stdio.h>

int main()
{
  // 3 rows of 4 columns
  int numbers[3][4] = {
      {10, 20, 30, 40},
      {15, 25, 35, 45},
      {47, 48, 49, 50},
  };

  // only need to initialize some values
  // uninitialized values are set to 0
  int matrix[4][5] = {
      {0, 3, 4},
      {0, 3, 4},
      {0, 3, 4},
      {0, 3, 4},
  };
  int partiallyInitializedMatrix[4][3] = {
      [0][0] = 1,
      [1][1] = 5,
      [2][2] = 9,
  };
  
  printf("%d", partiallyInitializedMatrix);
  return 0;
}