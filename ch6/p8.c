#include <stdio.h>


int main(void) {
    int total, start, i=1;

    printf("Enter number of days in month: ");
    scanf("%d", &total);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);


    while (i < start) {
        printf("   ");
        i++;
    }
    i = 1;
    while (i < total) {
        printf("%2d", i);
        if ((i + start - 1) % 7)
            printf(" ");
        else
            printf("\n");
        i++;
    }
    printf("%2d\n", i);
    return 0;

}