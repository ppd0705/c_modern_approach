#include <stdio.h>

int main(void) {
    int i, j, s, n = 3;
    int arr[n][n];

    for (i = 0; i < n; i++) {
        printf("Enter row %d: ", i+1);
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Row totals: ");
    for (i = 0; i < n; i++) {
        s = 0;
        for (j = 0; j < n; j++) {
            s += arr[i][j];
        }
        printf("%d ", s);
    }
    printf("\nColumn totals: ");
    for (i = 0; i < n; i++) {
        s = 0;
        for (j = 0; j < n; j++) {
            s += arr[j][i];
        }
        printf("%d ", s);
    }
    printf("\n");
    return 0;
}

