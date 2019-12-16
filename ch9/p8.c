#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h> // time


int roll_dice(void);

bool play_game(void);

int main(void) {
    int lose = 0, win = 0;
    char c;
    srand((unsigned) time(NULL));
    do {
        if (play_game()) {
            printf("you win!\n");
            win++;
        } else {
            printf("you lose!\n");
            lose++;
        }
        printf("\nplay again? ");
        scanf(" %c", &c);
        printf("\n");
    } while (toupper(c) == 'Y');
    printf("wins: %d, losses: %d\n", win, lose);
}

int roll_dice(void) {
    return rand() % 6 + rand() % 6 + 2;
}

bool play_game(void) {
    int n, m;
    n = roll_dice();
    printf("you rolled %d \n", n);
    if (n == 7 || n == 11)
        return true;
    else if (n == 2 || n == 3 || n == 12)
        return false;
    else {
        printf("your points: %d\n", n);
        while (true) {
            m = roll_dice();
            printf("you rolled %d\n", m);
            if (m == n)
                return true;
            else if (m == 7)
                return false;
        }
    }
}
