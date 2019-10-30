#include <stdio.h>

int main(void) {

    float number, largest;
    printf("Enter a number: ");
    scanf("%f", &number);
    largest = (number > 0.0f ? number : 0.0f);
    for (; ;){
        printf("Enter a number: ");
        scanf("%f", &number);
        if (number <= 0.0f)
            break;
        if (number > largest)
            largest = number;
    }
    printf("The largest number entered is: %.2f\n", largest);
    return 0;

}