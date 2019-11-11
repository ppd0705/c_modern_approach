#include <stdio.h>


int main(void) {
    double sum, n;

    sum = 0.0;

    printf("this program sums a series of doubles.\n");
    printf("Enter doubles (0.0 to terminate): ");
    do {
        scanf("%lf", &n);
        sum += n;
    } while (n != 0.0);

    printf("the sum is: %.4f\n", sum);

    return 0;
}