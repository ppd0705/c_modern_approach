#include <stdio.h>

int main(void)
{
    char ch;
    int ch_num = 0, word_num = 0;
    float result = 0.0f;

    printf("Enter an sentence: ");

    while ((ch = getchar()) != '\n') {
        if (ch != ' ') {
            ch_num++;
        } else {
            word_num++;
        }
    }

    word_num++;
    result = (float) ch_num / word_num;
    printf("Average word length: %.1f\n", result);
    return 0;
}