#include <stdio.h>


int main(void) {
    char ch, arr[80] = {0};
    int i, arr_length = 0, shift_amount;

    printf("Enter a message to be encrypted: ");
    while ((ch = getchar()) != '\n') {
        arr[arr_length++] = ch;
    }

    printf("Enter a shit amount(1-25): ");
    scanf("%d", &shift_amount);

    printf("Encrypted message: ");
    for (i = 0; i < arr_length; i++) {
        if (arr[i] >= 'A'  && arr[i] <= 'Z')
            putchar(((arr[i] - 'A') + shift_amount) % 26 + 'A');
        else if (arr[i] >= 'a' && arr[i] <= 'z')
            putchar(((arr[i] - 'a') + shift_amount) % 26 + 'a');
        else
            putchar(arr[i]);
    }

    printf("\n");
}