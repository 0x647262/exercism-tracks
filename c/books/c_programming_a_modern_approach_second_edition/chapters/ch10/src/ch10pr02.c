/*
 * Modify the poker.c program of Section 10.5 by moving the num_in_rank[] &
 * num_in_suit[] arrays into main, which will pass them as arguments to
 * read_cards() and analyze_hand();
 *
 * ##### Spec:
 *
 * ##### poker.c
 * Classifies a poker hand.
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define RANKS 13
#define SUITS 4
#define HAND 5

/* External Variables */
static bool straight, flush, four, three;
static int pairs;

void read_cards(int[], int[]);
void analyze_hand(const int[], const int[]);
void print_result(void);

void read_cards(int num_in_rank[], int num_in_suit[]) {
  bool card_exists[RANKS][SUITS];
  int ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card;
  int cards_read = 0;

  for (rank = 0; rank < RANKS; rank += 1) {
    num_in_rank[rank] = 0;
    for (suit = 0; suit < SUITS; suit += 1) {
      card_exists[rank][suit] = false;
    }
  }

  for (suit = 0; suit < SUITS; suit += 1) {
    num_in_suit[suit] = 0;
  }

  while (cards_read < HAND) {
    bad_card = false;
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
    case 'T':
      rank = 8;
      break;
    case 'j':
    case 'J':
      rank = 9;
      break;
    case 'q':
    case 'Q':
      rank = 10;
      break;
    case 'k':
    case 'K':
      rank = 11;
      break;
    case 'a':
    case 'A':
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

    while ((ch = getchar()) != '\n') {
      if (ch != ' ') {
        bad_card = true;
      }
    }

    if (bad_card) {
      printf("Bad card; ignored.\n");
    } else if (card_exists[rank][suit]) {
      printf("Duplicate card; ignored.\n");
    } else {
      num_in_rank[rank] += 1;
      num_in_suit[suit] += 1;
      card_exists[rank][suit] = true;
      cards_read += 1;
    }
  }
}

void analyze_hand(const int num_in_rank[], const int num_in_suit[]) {
  /*
   * Determines whether the hand contains a straight, flush, four of a kind,
   * three of a kindl determines the number of pairs; stores the results into
   * the external variables straight, flush, four, three, and pairs.
   */

  int num_consec = 0;
  int rank, suit;
  straight = false;
  flush = false;
  four = false;
  three = false;
  pairs = 0;

  /* Check for a flush */
  for (suit = 0; suit < SUITS; suit += 1) {
    if (num_in_suit[suit] == HAND) {
      flush = true;
    }
  }

  /* Check for straight */
  rank = 0;
  while (num_in_rank[rank] == 0) {
    rank += 1;
  }
  while (rank < RANKS && num_in_rank[rank] > 0) {
    num_consec += 1;
    rank += 1;
  }
  if (num_consec == HAND) {
    straight = true;
    return;
  }

  /* Check for 4 of a kind, 3 of a kind, and pairs */
  for (rank = 0; rank < RANKS; rank += 1) {
    if (num_in_rank[rank] == 4) {
      four = true;
    }
    if (num_in_rank[rank] == 3) {
      three = true;
    }
    if (num_in_rank[rank] == 2) {
      pairs += 1;
    }
  }
}

void print_result(void) {
  if (straight && flush) {
    printf("Straight flush");
  } else if (four) {
    printf("Four of a kind");
  } else if (three && pairs == 1) {
    printf("Full house");
  } else if (flush) {
    printf("Flush");
  } else if (straight) {
    printf("Straight");
  } else if (three) {
    printf("Three of a kind");
  } else if (pairs == 2) {
    printf("Two pairs");
  } else if (pairs == 1) {
    printf("Pair");
  } else {
    printf("High card");
  }
  printf("\n");
}

int main(void) {
  int num_in_rank[RANKS];
  int num_in_suit[SUITS];

  while (1) {
    read_cards(num_in_rank, num_in_suit);
    analyze_hand(num_in_rank, num_in_suit);
    print_result();
  }
}
