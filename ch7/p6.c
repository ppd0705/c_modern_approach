#include <stdio.h>

int main(void) {
    printf("size of int: %lu\n", sizeof(int));
    printf("size of short int: %lu\n", sizeof(short int));
    printf("size of long int: %lu\n", sizeof(long int));
    printf("size of float: %lu\n", sizeof(float));
    printf("size of double: %lu\n", sizeof(double));
    printf("size of long double: %lu\n", sizeof(long double));

    return 0;
}