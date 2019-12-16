#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(char counts[26]);

bool is_equal_array(char counts1[26], char counts2[26]);

int main(void) {
    char arr1[26] = {0}, arr2[26] = {0};
    bool ret;

    printf("Enter first word: ");
    read_word(arr1);
    printf("Enter second word: ");
    read_word(arr2);

    ret = is_equal_array(arr1, arr2);

    if (ret)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");
}

void read_word(char counts[26]) {
    char ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            counts[tolower(ch) - 'a']++;
        }
    }
}

bool is_equal_array(char counts1[26], char counts2[26]) {
    int i;
    for (i = 0; i < 26; i++)
        if (counts1[i] != counts2[i])
            return false;
    return true;
}