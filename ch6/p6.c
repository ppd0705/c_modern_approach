#include <stdio.h>

int main(void) {
    int i = 1, n;
    printf("Enter a integer: ");
    scanf("%d", &n);

    for (; ;) {
        i++;
        if (i % 2) {
            continue;
        }
        if (i * i > n)
            break;
        printf("%d\n", i * i);
    }

    return 0;
}