#include <stdio.h>

int polynomial_calculation(int x);

int main(void) {
    int n;
    printf("Enter a integer: ");
    scanf("%d", &n);
    printf("ret is %d\n", polynomial_calculation(n));
}

int polynomial_calculation(int x) {
    return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
}