#include <stdio.h>
#include <stdbool.h>


int main(void) {
    char ch, final = 0, arr[200], pos_pair[200];
    int i, j, start = 0, end = 0, arr_length = 0, pos_pair_length = 0;
    bool prev_is_space = false;
    printf("Enter a sentence: ");
    for (i = 0; i < 200; i++) {
        ch = getchar();
        if (ch == '?' || ch == '!' || ch == '.')
            final = ch;

        if (ch == ' ') {
            prev_is_space = true;
        } else {
            if (prev_is_space || final) {
                pos_pair[pos_pair_length++] = start;
                pos_pair[pos_pair_length++] = end;
                start = end;
            }
            if (final)
                break;
            arr[arr_length++] = ch;
            end++;
            prev_is_space = false;

        }

    }

    if (final) {
        printf("Reversal of sentence: ");
        for (i = pos_pair_length; i > 1; i -= 2) {
            end = pos_pair[i - 1];
            start = pos_pair[i - 2];
            while (start < end) {
                putchar(arr[start]);
                start++;
            }
            if (i > 2)
                putchar(' ');
            else {
                putchar(final);
                putchar('\n');
            }

        }
    }
}