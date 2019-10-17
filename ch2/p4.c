#include <stdio.h>

#define RATE 1.05f

int main(void)
{
  float amount, total;
  printf("Enter an amount: ");
  scanf("%f", &amount);

  total = amount * RATE;
  printf("With tax added: %.2f\n", total);
  return 0;
}