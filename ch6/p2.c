#include <stdio.h>

int main(void) {

    int  m, n, t;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    while (n != 0) {
        t = m % n;
        m = n;
        n = t;
    }

    printf("Greatest common divisor: %d\n", m);
    return 0;

}