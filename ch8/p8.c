#include <stdio.h>

int main(void) {
    int i, j, s, high, low, n = 3;
    int arr[n][n];

    for (i = 0; i < n; i++) {
        printf("Enter no. %d student's  %d grades: ", i+1, n);
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        s = 0;
        for (j = 0; j < n; j++) {
            s += arr[i][j];
        }
        printf("no. %d student sum: %d ave: %.2f\n", i+1, s, (float) s / n);
    }
    for (i = 0; i < n; i++) {
        s = 0;
        high = 0;
        low = 100;
        for (j = 0; j < n; j++) {
            s += arr[j][i];
            if (arr[j][i] > high)
                high =  arr[j][i];
            if (arr[i][j] < low)
                low = arr[j][i];

        }
        printf("no. %d subject ave: %.2f high: %d, low: %d\n", i+1,  (float) s / n, high, low);

    }
    return 0;
}

