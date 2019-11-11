#include <stdio.h>

int main(void)
{
    int n, ret = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = n;i > 1; i--)
        ret *= i;
    printf("Factor of %d: %d\n", n, ret);
    return 0;
}