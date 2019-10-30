#include <stdio.h>

int main(void) {

    int  i1, i2, m, n, t;
    printf("Enter a fraction: ");
    scanf("%d/%d", &i1, &i2);
    m = i1;
    n = i2;
    while (n != 0) {
        t = m % n;
        m = n;
        n = t;
    }

    printf("In lowest terms: %d/%d\n", i1/m, i2/m);
    return 0;

}