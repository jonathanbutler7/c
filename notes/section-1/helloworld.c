#include <stdio.h>
// stdio means standard input/output
// #include "stdio.h" would mean it will look first in the current directory for a user defined lib

// cmd + shift + b will recompile after making changes
// ctrl + opt + n will compile and give terminal with one command using Code Runner
// int main()
// {
//   char str[100];
// int i;
// printf("Enter a letter then a number:");

// scanf("%s %d", str, &i);

// printf("\nYou entered: letter %s, and then number %d\n", str, i);

// return 0;
// double _x;
// scanf("%lf", &_x);
// }

int main()
{
  // enter the number of minutes
  // convert number of minutes to days and years
  // print out the minutes and then its equivalent in years and days
  // store minutes (int), minutes in year, years, days

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