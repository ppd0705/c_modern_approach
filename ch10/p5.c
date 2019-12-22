#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

// external variables
int hand[NUM_CARDS][2];
bool max_straight_flush, straight, flush, four, three;
int pairs; // can be 0, 1 or 2

// prototypes
void read_cards(void);

void analyze_hand(void);

void print_result(void);

int main(void) {
    for (;;) {
        read_cards();
        analyze_hand();
        print_result();
    }
}

void read_cards(void) {
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card, duplicated_card;
    int cards_read = 0;
    int i;

    while (cards_read < NUM_CARDS) {
        bad_card = false;
        duplicated_card = false;
        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
            case '0':
                exit(EXIT_SUCCESS);
            case '2':
                rank = 0;
                break;
            case '3':
                rank = 1;
                break;
            case '4':
                rank = 2;
                break;
            case '5':
                rank = 3;
                break;
            case '6':
                rank = 4;
                break;
            case '7':
                rank = 5;
                break;
            case '8':
                rank = 6;
                break;
            case '9':
                rank = 7;
                break;
            case 't':
                rank = 8;
                break;
            case 'j':
                rank = 9;
                break;
            case 'q':
                rank = 10;
                break;
            case 'k':
                rank = 11;
                break;
            case 'a':
                rank = 12;
                break;
            default:
                bad_card = true;
        }
        suit_ch = getchar();
        switch (suit_ch) {
            case 'c':
            case 'C':
                suit = 0;
                break;
            case 'd':
            case 'D':
                suit = 1;
                break;
            case 'h':
            case 'H':
                suit = 2;
                break;
            case 's':
            case 'S':
                suit = 3;
                break;
            default:
                bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ')
                bad_card = true;


        if (bad_card)
            printf("Bad card; ignored.\n");
        else {
            for (i = 0; i < cards_read; i++) {
                if (hand[i][0] == rank && hand[i][1] == suit) {
                    duplicated_card = true;
                    break;
                }
            }
            if (duplicated_card)
                printf("Duplicate card; ignored.\n");
            else {
                hand[cards_read][0] = rank;
                hand[cards_read][1] = suit;
                cards_read++;
            }
        }
    }


}

void analyze_hand(void) {
    int rank, suit;
    int i, j, smallest, count;

    straight = false;
    flush = false;
    four = false;
    three = false;

    for (i = 0; i < NUM_CARDS - 1; i++) {
        smallest = i;
        for (j = i + 1; j < NUM_CARDS; j++) {
            if (hand[j][0] < hand[smallest][0])
                smallest = j;
        }
        rank = hand[i][0];
        suit = hand[i][1];
        hand[i][0] = hand[smallest][0];
        hand[i][1] = hand[smallest][1];
        hand[smallest][0] = rank;
        hand[smallest][1] = suit;
    }

    suit = hand[0][1];
    for (i = 1; i < NUM_CARDS; i++) {
        if (hand[i][1] != suit)
            break;

        if (i == NUM_CARDS - 1)
            flush = true;
    }

    rank = hand[0][0];
    for (i = 1; i < NUM_CARDS; i++) {
        if (hand[i][0] != rank + 1) {
            if (i == NUM_CARDS - 1 && rank == 3 && hand[i][0] == NUM_RANKS - 1)
                ;
            else
                break;
        }
        rank++;
        if (i == NUM_CARDS - 1) {
            straight = true;
            if (flush && rank == NUM_RANKS - 1)
                max_straight_flush = true;
        }
    }

    rank = hand[0][0];
    count = 1;
    for (i = 1; i < NUM_CARDS; i++) {
        if (hand[i][0] == rank) {
            count++;
            if (i < NUM_CARDS - 1)
                continue;
        }
        if (count == 4)
            four = true;
        else if (count == 3)
            three = true;
        else if (count == 2)
            pairs++;
        rank = hand[i][0];
        count = 1;
    }

}

void print_result(void) {
    if (max_straight_flush)
        printf("Max straight flush");
    else if (straight && flush)
        printf("Straight flush");
    else if (four)
        printf("Four for a kind");
    else if (three && pairs == 1)
        printf("Full house");
    else if (flush)
        printf("Flush");
    else if (straight)
        printf("Straight");
    else if (three)
        printf("Three of a kind");
    else if (pairs == 2)
        printf("Two pairs");
    else if (pairs == 1)
        printf("Pair");
    else
        printf("High card");

    printf("\n\n");
}