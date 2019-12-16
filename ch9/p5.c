#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);

void print_magic_square(int n, char magic_square[n][n]);

int main(void) {
    int i, j, n, prev_row, current_row, prev_column, current_column;

    printf("Enter size of magic square(odd number between 1 and 99): ");
    scanf("%d", &n);
    char arr[n][n];
    create_magic_square(n, arr);
    print_magic_square(n, arr);
}

void create_magic_square(int n, char magic_square[n][n]) {
    int i, j, prev_row, current_row, prev_column, current_column;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            magic_square[i][j] = 0;

    prev_row = 0;
    prev_column = n / 2;
    magic_square[prev_row][prev_column] = 1;
    for (i = 2; i <= n * n; i++) {
        current_row = prev_row - 1;
        current_column = prev_column + 1;
        if (current_row == -1)
            current_row = n - 1;

        if (current_column == n)
            current_column = 0;

        if (magic_square[current_row][current_column] != 0) {
            current_row = prev_row + 1;
            if (current_row == n)
                current_row = 0;
            current_column = prev_column;
        }

        magic_square[current_row][current_column] = i;

        prev_column = current_column;
        prev_row = current_row;
    }

}

void print_magic_square(int n, char magic_square[n][n]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%3d", magic_square[i][j]);
        printf("\n");
    }
}