#include <stdio.h>

int main(void)
{
  float loan, rate, rate_per_month,payment_per_month;
  printf("Enter amount of loan: ");
  scanf("%f", &loan);

  printf("Enter interest rate: ");
  scanf("%f", &rate);
  rate_per_month = rate / 12.0f / 100.f;

  printf("Enter monthly payment: ");
  scanf("%f", &payment_per_month);

  // first month
  loan = loan - payment_per_month + loan * rate_per_month;
  printf("Balance remaining after first payment: $%.2f\n", loan);

  loan = loan - payment_per_month + loan * rate_per_month;
  printf("Balance remaining after second payment: $%.2f\n", loan);

  loan = loan - payment_per_month + loan * rate_per_month;
  printf("Balance remaining after third payment: $%.2f\n", loan);

  return 0;
}