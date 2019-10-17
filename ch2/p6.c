#include <stdio.h>

int main(void)
{
  float x, ret;
  printf("Enter an number: ");
  scanf("%f", &x);
  ret = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("result: %.2f\n",  ret);
  return 0;
}