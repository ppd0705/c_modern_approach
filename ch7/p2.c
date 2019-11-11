#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");

    scanf("%d", &n);
    // skip new-line character
    getchar();

    i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0) {
            printf("Press enter to continue ...\n");
            getchar();
        }
        i++;
    }

    return 0;
}
