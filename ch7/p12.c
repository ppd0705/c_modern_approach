#include <stdio.h>

int main(void)
{
    char ch;
    float value, result;

    printf("Enter an expression (example: 1+2.5*3): ");

    scanf("%f", &result);
    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case '+':
                scanf("%f", &value);
                result += value;
                break;
            case '-':
                scanf("%f", &value);
                result -= value;
                break;
            case '*':
                scanf("%f", &value);
                result *= value;
                break;
            case '/':
                scanf("%f", &value);
                result /= value;
                break;
            default:
                break;
        }
    }
    printf("the answer is: %.2f\n", result);
    return 0;
}