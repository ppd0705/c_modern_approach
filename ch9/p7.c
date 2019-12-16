#include <stdio.h>

int polynomial_calculation(int x);

int power(int x, int n);

int main(void) {
    int n;
    printf("Enter a integer: ");
    scanf("%d", &n);
    printf("ret is %d\n", polynomial_calculation(n));
}

int polynomial_calculation(int x) {
    return 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) + 7 * x - 6;
}

int power(int x, int n) {
    if (n == 0)
        return 1;
    else if (n % 2)
        return x * power(x, n - 1);
    else
        return power(x, n / 2) * power(x, n / 2);

}