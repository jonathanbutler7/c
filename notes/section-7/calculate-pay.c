#include <stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40

int main()
{
  int hours = 0;
  double grossPay = 0.0;
  double taxes = 0.0;
  double netPay = 0.0;

  printf("How many hours did you work?\n");
  scanf("%d", &hours);

  if (hours <= 40)
    grossPay = hours * PAYRATE;
  else
  {
    grossPay = 40 * PAYRATE;
    double overTimePay = (hours - 40) * (PAYRATE * 1.5);
    grossPay += overTimePay;
  }

  if (grossPay <= 300)
  {
    taxes = grossPay * TAXRATE_300;
  }
  if (grossPay > 300 && grossPay <= 450)
  {
    taxes = 300 * TAXRATE_300;
    taxes += (grossPay - 300) * TAXRATE_150;
  }
  else if (grossPay > 450)
  {
    taxes = 300 * TAXRATE_300;
    taxes += 150 * TAXRATE_150;
    taxes += (grossPay - 450) * TAXRATE_REST;
  }

  printf("Gross pay: %.2f\n", grossPay);
  printf("Taxes: %.2f\n", taxes);
  printf("Net pay: %.2f\n", grossPay - taxes);

  return 0;
}

// int main()
// {
//   int hours;
//   int hourlyRate = 10.00;
//   int preTaxPay;
//   int taxedPay;
//   printf("How many hours did you work?\n");
//   scanf("%d", &hours);
//   if (hours <= 40)
//   {
//     preTaxPay = hours * hourlyRate;
//   }
//   else
//   {
//     int preOvertimePay = 40 * hourlyRate;
//     int overtimePay = (hours - 40) * (hourlyRate * 1.5);
//     preTaxPay = preOvertimePay + overtimePay;
//   }
//   if (preTaxPay <= 300)
//   {
//     taxedPay = preTaxPay - (preTaxPay * 0.15);
//   }
//   else if (preTaxPay <= 450)
//   {
//     int remainder = preTaxPay - 300;
//     taxedPay = 300 - (300 * 0.15) + remainder - (remainder * .20);
//   }
//   else if (preTaxPay > 450)
//   {
//     int remainder = preTaxPay - 450;
//     taxedPay = 300 - (300 * 0.15) + 150 - (150 * .20) + remainder - (remainder * .25);
//   }
//   printf("Gross pay:%i\n", preTaxPay);
//   printf("Net pay:%i\n", taxedPay);
//   return 0;
// }
