#include <stdio.h>


int main(void) {
    int speed;
    printf("Enter wind speed: ");
    scanf("%d", &speed);

    if (speed < 1)
        printf("The wind level is Calm\n");
    else if (speed < 4)
        printf("The wind level is Light air\n");
    else if (speed < 28)
        printf("The wind level is Breeze\n");
    else if (speed < 48)
        printf("The wind level is Gale\n");
    else if (speed < 64)
        printf("The wind level is Storm\n");
    else
        printf("The wind level is Hurricane\n");
    return 0;
}