#include <stdio.h>

int main(void)
{
  int amount, i;
  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  i = amount / 20;
  printf("$20 biils: %d\n",  i);
  amount -= i * 20;

  i = amount / 10;
  printf("$10 biils: %d\n",  i);
  amount -= i * 10;

  i = amount / 5;
  printf(" $5 biils: %d\n",  i);
  amount -= i * 5;

  printf(" $1 biils: %d\n",  amount);
  return 0;
}