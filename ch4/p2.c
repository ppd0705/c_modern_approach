#include <stdio.h>

int main(void)
{
    int i;
    printf("Enter a three-digit number: ");
    scanf("%d", &i);
    printf("The reversal is : %1d%1d%1d\n", i % 10, (i  % 100 / 10), i / 100);
}