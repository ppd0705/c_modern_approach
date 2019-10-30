#include <stdio.h>

int main(void) {
    int i, sum;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    sum = 0;
    scanf("%d", &i);
    while (i != 0) {
        sum += i;
        scanf("%d", &i);
    }

    printf("The sum is: %d\n", sum);

    return 0;
}