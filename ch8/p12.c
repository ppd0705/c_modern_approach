#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    int grade = 0;
    int scrabble_values[26] = {
            /*  A  B  C  D  E  F  G  H  I  J  K  L  M  */
            1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,

            /*  N  O  P  Q   R  S  T  U  V  W  X  Y  Z */
            1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
    };

    printf("Please enter a word: ");
    while ((ch = getchar()) != '\n') {
        grade += scrabble_values[toupper(ch) - 'A']
    }
    printf("Scrabble value : %d\n", grade);
    return 0;

}