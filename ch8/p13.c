#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch, first, surname[20] = {0};
    int status = 0, surname_length = 0;

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
            surname[surname_length++] = ch;
       } else
           break;

    }
    for (int i = 0; i < surname_length; i++)
        printf("%c", surname[i]);
    printf(", %c.\n", first);

    return 0;
}