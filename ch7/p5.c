#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int grade = 0;

    printf("Please enter a word: ");
    while ((ch = getchar()) != '\n') {
        switch (toupper(ch)) {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
                grade += 1;
                break;
            case 'D':
            case 'G':
                grade += 2;
                break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                grade += 3;
                break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                grade += 4;
                break;
            case 'K':
                grade += 5;
                break;
            case 'J':
            case 'X':
                grade += 8;
                break;
            case 'Q':
            case 'Z':
                grade += 10;
                break;
            default:
                break;
        }
    }
    printf("Srabble value : %d\n", grade);
    return 0;

}