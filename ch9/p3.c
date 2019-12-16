#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // srand, rand
#include <time.h> // time


#define LENGTH  10
#define LEFT 0
#define RIGHT 1
#define UP 2
#define DOWN 3

void generate_random_walk(char walk[LENGTH][LENGTH]);
void print_array(char walk[LENGTH][LENGTH]);

int main(void) {
    char square[LENGTH][LENGTH];
    generate_random_walk(square);

    char c = 'A';
    int r, i = 0, j = 0;
    square[i][j] = c;
    srand((unsigned) time(NULL));

    // 0 -> left, 1 -> right, 2 -> up, 3 > down
    while (c < 'Z') {

        if ((i == 0 || square[i-1][j] != '.') &&
            (i == 9 || square[i+1][j] != '.') &&
            (j == 0 || square[i][j-1] != '.') &&
            (j == 9 || square[i][j+1] != '.'))
            break;

        r = rand() % 4;
        if (r == LEFT) {
            if (i > 0 && square[i - 1][j] == '.') {
                c += 1;
                i -= 1;
                square[i][j] = c;
            }
        } else if (r == RIGHT) {
            if (i < 9 && square[i + 1][j] == '.') {
                c += 1;
                i += 1;
                square[i][j] = c;
            }
        } else if (r == UP) {
            if (j > 0 && square[i][j - 1] == '.') {
                c += 1;
                j -= 1;
                square[i][j] = c;
            }
        } else {
            if (j < 9 && square[i][j + 1] == '.') {
                c += 1;
                j += 1;
                square[i][j] = c;
            }
        }
    }

    print_array(square);
    return 0;
}

void generate_random_walk(char walk[LENGTH][LENGTH]) {
    int i, j;
    for (i = 0; i < LENGTH; i++)
        for (j = 0; j < LENGTH; j++)
            walk[i][j] = '.';
}

void print_array(char walk[LENGTH][LENGTH]) {
    int i, j;
    for (i = 0; i < LENGTH; i++) {
        for (j = 0; j < LENGTH; j++)
            printf("%c ", walk[i][j]);
        printf("\n");
    }
}
