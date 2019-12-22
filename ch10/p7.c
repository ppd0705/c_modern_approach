#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10

#define DIGIT_HEIGHT 3
#define DIGIT_WIDTH 3
#define DIGIT_SPACING 1

#define MAX_DIGITS_SPACE (MAX_DIGITS * (DIGIT_WIDTH + DIGIT_SPACING)) - DIGIT_SPACING
#define MAX_SEGMENTS 7


/* Contains digit segments for all digits 0 through 9.
 * Segments are 'off' if 0, and 'on' if 1.
 * All digits can be represented using a maximum of 7 segments.
 *
 *     0
 *    ___
 * 5 |   | 1
 *   |_6_|
 * 4 |   | 2
 *   |___|
 *     3
 */

const int segments[MAX_DIGITS][MAX_SEGMENTS] = {
        {1, 1, 1, 1, 1, 1, 0},
        {0, 1, 1},
        {1, 1, 0, 1, 1, 0, 1},
        {1, 1, 1, 1, 0, 0, 1},
        {0, 1, 1, 0, 0, 1, 1},
        {1, 0, 1, 1, 0, 1, 1},
        {1, 0, 1, 1, 1, 1, 1},
        {1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1, 1},
};

const char number_char_map[MAX_SEGMENTS] = {'_', '|', '|', '_', '|', '|', '_'};

const char number_row_map[MAX_SEGMENTS] = {0, 1, 2, 2, 2, 1, 1};

const char number_column_map[MAX_SEGMENTS] = {1, 2, 2, 1, 0, 0, 1};

char digits[DIGIT_HEIGHT][MAX_DIGITS_SPACE];

void clear_digits_array(void);

void process_digit(int digit, int position);

void print_digits_array(void);

int main(void) {
    char ch;
    int position = 0;

    clear_digits_array();
    printf("Enter a number (up to 10 digits): ");
    while ((ch = getchar()) != '\n' && position < MAX_DIGITS_SPACE) {

        if (isdigit(ch)) {
            process_digit(ch - '0', position);
            position += DIGIT_WIDTH + DIGIT_SPACING;
        }
    }
    print_digits_array();

}

void clear_digits_array(void) {
    int i, j;
    for (i = 0; i < DIGIT_HEIGHT; i++)
        for (j = 0; j < MAX_DIGITS_SPACE; j++)
            digits[i][j] = ' ';
}

void process_digit(int digit, int position) {
    int i;
    char ch;
    for (i = 0; i < 7; i++) {
        if (segments[digit][i])
            digits[number_row_map[i]][number_column_map[i] + position] = number_char_map[i];
    }
}

void print_digits_array(void) {
    int i, j;
    for (i = 0; i < DIGIT_HEIGHT; i++) {
        printf("row: ");
        for (j = 0; j < MAX_DIGITS_SPACE; j++)
            printf("%c", digits[i][j]);
        printf("\n");
    }
}
