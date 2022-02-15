#include <stdio.h>

int main()
{
  
  long int minutesEntered;
  printf("Enter minutes: ");
  scanf("%ld", &minutesEntered);
  printf("\nMinutes entered: %ld\n", minutesEntered);

  float hours = minutesEntered / 60.0;
  float days = hours / 24.0;
  float years = days / 365.0;
  printf("\nMinutes is approximately %d days", (int)days);
  printf("\nYears entered: %lf\n", years);

  return 0;
}