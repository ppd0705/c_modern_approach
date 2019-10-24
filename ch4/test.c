#include <stdio.h>

int main(void)
{
    int i , j, k;
    printf("%d\n", 8 / 5);
    printf("%d\n", -8 / 5);
    printf("%d\n", 8 / -5);
    printf("%d\n", -8 / -5);

    printf("%d\n", 8 % 5);
    printf("%d\n", -8 % 5);
    printf("%d\n", 8 % -5);
    printf("%d\n", -8 % -5);

    i = 2;
    j = (i=6) + (j=3);
    printf("%d %d\n", i, j);

    i = 1;
    printf("%d\n", i++ -1);
    printf("%d\n", i);

    i = 10;
    j = 5;
    printf("%d\n", i++ - ++j);
    printf("%d, %d\n", i, j);

    i = 7;
    j = 8;

    printf("%d\n", i++ - --j);
    printf("%d, %d\n", i, j);

    i = 3;j = 4, k =5;

    printf("%d\n", i++ - j++ + --k);
    printf("%d, %d, %d\n", i, j, k);

}