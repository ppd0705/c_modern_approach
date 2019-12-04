#include <stdio.h>
#include <stdbool.h>


int main(void) {
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter number(s): ");
    while (1) {
        scanf("%ld", &n);
        if (n <= 0)
            break;
        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit])
                break;

            digit_seen[digit] = true;
            n /= 10;

        }
        if (n > 0) {
            printf("Repeated digit\n");
            break;
        }
    }
    if (n <= 0)
         printf("No repeated digit\n");


    return 0;
}