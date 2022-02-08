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

//   return 0;
// //   // double _x;
// //   // scanf("%lf", &_x);
// }

int main()
{
  // enter the number of minutes
  // convert number of minutes to days and years
  // print out the minutes and then its equivalent in years and days
  // store minutes (int), minutes in year, years, days

  int minutes;
  printf("Enter minutes: ");
  scanf("%d", &minutes);
  printf("\nMinutes entered: %d\n", minutes);

  float hours = minutes / 60.0;
  float days = hours / 24.0;
  float years = days / 365.0;
  printf("\nYears entered: %lf\n", years);
  
  return 0;
}