#include <stdio.h>


int main(void) {
    int i, digit;
    printf("Enter a number: ");
    scanf("%d", &i);

    if (i < 10)
        digit = 1;
    else if (i < 100)
        digit = 2;
    else
        digit = 3;

    printf("The number %d has %d digits\n", i, digit);

    return 0;
}