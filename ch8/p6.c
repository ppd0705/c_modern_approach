#include <stdio.h>
#include <ctype.h>

int main(void) {
    int i, n;
    char msg[100] = {0};
    printf("Enter message: ");
    for (n = 0; (msg[n] = toupper(getchar())) != '\n'; n++);
    printf("In B1FF-speak: ");
    for (i = 0; i < n; i++) {
        switch (msg[i]) {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(msg[i]);
                break;
        }
    }
    printf("!!!!!!!!!!\n");
    return 0;
}