#include <stdbool.h> //booleans
#include <stdio.h>
#include <stdlib.h> //Random
#include <time.h> //time
//8.1 exercise stored here, random, this program deals cards using arrays and booleans, p cool
//practice 8.3 - bool a[7] ={ [0]= 1, [6]=1}
#define NUM_SUITS 4 
#define NUM_RANKS 13

int main(void)
{
    bool in_hand[NUM_SUITS] [NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
    const char suit_code[] = {'c', 'd', 'h', 's',};

    srand((unsigned) time(NULL));

    printf("Enter number of cards in hand: ");
    scanf(" %d", &num_cards);

    printf("Your hand:");
    while (num_cards >0) {
        suit = rand() % NUM_SUITS; //picks a random suit
        rank = rand() % NUM_RANKS;  //picks a random rank
        
        if (!in_hand[suit][rank])
        {
            in_hand[suit] [rank] =true;
            num_cards--;
            printf( " %c%c", rank_code[rank], suit_code[suit]);
        }
    }
    printf("\n");
    return 0;
}