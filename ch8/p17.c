#include <stdio.h>


int main(void) {
    int i, j, n, prev_row, current_row, prev_column, current_column;

    printf("Enter size of magic square(odd number between 1 and 99): ");
    scanf("%d", &n);
    int arr[n][n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            arr[i][j] = 0;

    prev_row = 0;
    prev_column = n / 2;
    arr[prev_row][prev_column] = 1;
    for (i = 2; i <= n * n; i++) {
        current_row = prev_row - 1;
        current_column = prev_column + 1;
        if (current_row == -1)
            current_row = n - 1;

        if (current_column == n)
            current_column = 0;

        if (arr[current_row][current_column] != 0) {
            current_row = prev_row + 1;
            if (current_row == n)
                current_row = 0;
            current_column = prev_column;
        }

        arr[current_row][current_column] = i;

        prev_column = current_column;
        prev_row = current_row;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%3d", arr[i][j]);
        printf("\n");
    }

}