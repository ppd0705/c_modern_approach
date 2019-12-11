#include <stdio.h>

int main(void) {
    char ch, arr[15];
    int  i = 0, j;
    printf("Please enter a phone number: ");

    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case 'A':
            case 'B':
            case 'C':
                arr[i] = '2';
                break;
            case 'D':
            case 'E':
            case 'F':
                arr[i] = '3';
                break;
            case 'G':
            case 'H':
            case 'I':
                arr[i] = '4';
                break;
            case 'J':
            case 'K':
            case 'L':
                arr[i] = '5';
                break;
            case 'M':
            case 'N':
            case 'O':
                arr[i] = '6';
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                arr[i] = '7';
                break;
            case 'T':
            case 'U':
            case 'V':
                arr[i] = '8';
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                arr[i] = '2';
                break;
            default:
                arr[i] = ch;
                break;
        }
        i++;
    }
    printf("In numeric for: ");
    for (j=0; j<=i; j++) {
        putchar(arr[j]);
    }
    printf("\n");
    return 0;

}