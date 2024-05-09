/*
 * ##### deal.c
 * Deals a random hand of cards.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {
  int in_hand[NUM_SUITS][NUM_RANKS] = {{0}, {0}};
  int num_cards, rank, suit;
  const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8',
                            '9', 't', 'j', 'q', 'k', 'a'};
  const char suit_code[] = {'c', 'd', 'h', 's'};

  srand((unsigned)time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);

  printf("Your hand:\n");
  while (num_cards > 0) {
    /* Picks a random suit */
    suit = rand() % NUM_SUITS;
    /* Picks a random rank */
    rank = rand() % NUM_RANKS;
    if (!in_hand[suit][rank]) {
      in_hand[suit][rank] = 1;
      num_cards -= 1;
      printf("\t%c%c", rank_code[rank], suit_code[suit]);
    }
  }
  printf("\n");

  return 0;
}
