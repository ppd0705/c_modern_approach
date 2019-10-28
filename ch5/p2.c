#include <stdio.h>


int main(void) {
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour < 13)
        printf("Equivalent 12-hour time: %d:%d AM\n", hour, minute);
    else
        printf("Equivalent 12-hour time: %d:%.2d PM\n", hour - 12, minute);

    return 0;
}