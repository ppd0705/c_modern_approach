#include <stdio.h>

int main(void)
{
  float x, ret;
  printf("Enter an number: ");
  scanf("%f", &x);
  ret = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x  - x * x + 7 * x - 6;
  printf("result: %.2f\n",  ret);
  return 0;
}