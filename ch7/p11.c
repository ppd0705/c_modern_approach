#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch, first;
    int status = 0;

    printf("Enter a first and last name: ");
    while ((ch = getchar()) != '\n') {
       if (status == 0) {
            if (ch == ' ')
                continue;
            else {
                first = toupper(ch);
                status = 1;
            }
       } else if (status == 1) {
            if (ch == ' ')
                status = 2;
       } else if (ch != ' ') {
            putchar(ch);
       }

    }
    printf(", %c.\n", first);

    return 0;
}