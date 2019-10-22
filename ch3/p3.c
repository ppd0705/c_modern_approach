#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &n1, &n2, &n3, &n4, &n5);

    printf("GS1 prefix: %d\n", n1);
    printf("Group identifier: %d\n", n2);
    printf("Publisher code: %d\n", n3);
    printf("Item number: %d\n", n4);
    printf("Check digit: %d\n", n5);

    return 0;
}