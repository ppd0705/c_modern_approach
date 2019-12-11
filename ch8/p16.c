#include <stdio.h>
#include <ctype.h>


int main(void) {
    char ch, arr[26] = {0};
    int i;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            arr[tolower(ch) - 'a']++;
        }
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            arr[tolower(ch) - 'a']--;
        }
    }

    for (i = 0; i < 26; i++) {
        if (arr[i] != 0) {
            break;
        }
    }

    if (i == 26)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");
}