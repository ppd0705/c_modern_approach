#include <stdio.h>

int main(void)
{
    int i;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &i);

    printf("The octal your number is: %.5o\n", i);
}