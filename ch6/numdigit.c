#include <stdio.h>

int main(void) {
    int digit = 0, n;

    printf("Enter a nonnegative integer: ");

     scanf("%d", &n);
    do {
        n /= 10;
        digit++;
    }   while (n > 0);

    printf("The number has %d digit(s)\n", digit);

    return 0;
}