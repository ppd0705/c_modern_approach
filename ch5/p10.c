#include <stdio.h>


int main(void) {
    int i;
    printf("Enter grade number: ");
    scanf("%d", &i);

    if (i < 0 || i > 100) {
         printf("your grade number %d is invalid\n", i);
         return 0;
    }

    switch (i / 10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("your grade level: F\n");
            break;
        case 6:
            printf("your grade level: D\n");
            break;
        case 7:
            printf("your grade level: C\n");
            break;
        case 8:
            printf("your grade level: B\n");
            break;
        case 9:
        case 10:
            printf("your grade level: A\n");
            break;

    return 0;
    }

    return 0;
}