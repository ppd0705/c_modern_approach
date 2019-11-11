#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y = 1.0, z;
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    z = (y + x / y) / 2;
    while (fabs(z - y) > 0.00001 * z) {
        y = z;
        z = (y + x / y) / 2;
    }

    printf("Square root: %f\n", y);
    return 0;
}