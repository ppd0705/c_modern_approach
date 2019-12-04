#include <stdio.h>

#define NUM_RATES 5
#define INITIAL_BALANCE 100.00

int main(void) {
    int i, low_rate, num_years, year;
    double value[NUM_RATES];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");

    for (i=0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year=1; year <= num_years; year++) {
        printf("%3d   ", year);
        for (i=0; i < NUM_RATES; i++) {
            value[i] *= (1 + (low_rate + i) / 100.0);
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}