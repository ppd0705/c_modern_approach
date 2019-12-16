#include <stdio.h>

#define N 10

void select_sort(int a[], int n);

int main(void) {
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);

    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    select_sort(a, N - 1);
    printf("In sorted order: ");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);

    printf("\n");
}

void select_sort(int a[], int n) {
    int i, temp, max_element_index;
    if (n < 1) return;

    max_element_index = n;
    for (i = n - 1; i >= 0; i--) {
        if (a[i] > a[max_element_index])
            max_element_index = i;
    }

    temp = a[n];
    a[n] = a[max_element_index];
    a[max_element_index] = temp;
    select_sort(a, n - 1);
}
