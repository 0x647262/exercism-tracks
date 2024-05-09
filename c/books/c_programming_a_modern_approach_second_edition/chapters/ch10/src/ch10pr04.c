/*
 * Modify the poker.c program of section 10.5 by having it recognize an
 * additional category, "royal flush" (ace, king, queen, jack, ten of the same
 * suit) A royal flush ranks higher than all other hands.
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define RANKS 13
#define RANK 0
#define SUITS 4
#define SUIT 1
#define HAND 5

/* External Variables */
static bool straight, flush, four, three, royal_flush;
static int pairs;

void read_cards(int[5][2]);
void analyze_hand(const int[5][2]);
void print_result(void);

void read_cards(int hand[5][2]) {
  int ch, rank_ch, suit_ch;
  int rank = 0;
  int suit = 0;
  int card = 0;

  while (card < HAND) {
    hand[card][RANK] = 0;
    hand[card][SUIT] = 0;
    card += 1;
  }

  card = 0;
  while (card < HAND) {
    bool bad_card = false;
    bool duplicate = false;
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
    if (card > 0) {
      int i = 0;
      while (i < card) {
        if (hand[i][RANK] == rank && hand[i][SUIT] == suit) {
          duplicate = true;
        }
        i += 1;
      }
    }

    if (bad_card) {
      printf("Bad card; ignored.\n");
    } else if (duplicate) {
      printf("Duplicate card; ignored.\n");
    } else {
      hand[card][RANK] = rank;
      hand[card][SUIT] = suit;
      card += 1;
    }
  }
}

void analyze_hand(const int hand[5][2]) {
  /*
   * Determines whether the hand contains a straight, flush, four of a kind,
   * three of a kind & determines the number of pairs; stores the results
   * into the external variables straight, flush, four, three, and pairs.
   */
  int consec = 0;
  int rank = 0;
  int suit = 0;
  int card = 0;
  pairs = 0;
  straight = false;
  flush = false;
  four = false;
  three = false;
  royal_flush = false;

  /* Check for a flush */
  for (suit = hand[RANK][SUIT]; hand[card][SUIT] == suit; card += 1) {
    consec += 1;
  }
  if (consec == HAND) {
    flush = true;
  }

  /*
   * The original program is buggy, for the sake of simplicity, the user must
   * enter a straight in the correct order for it to be counted.
   *
   * Check for straight
   */
  card = 0;
  consec = 0;
  rank = hand[card][RANK];
  while (card < HAND) {
    if (hand[card][RANK] == rank) {
      consec += 1;
      rank += 1;
      card += 1;
    } else {
      break;
    }
  }
  if (consec == HAND) {
    straight = true;
    return;
  }

  /* Check for 4 of a kind, 3 of a kind, and pairs */
  int ranks[RANKS] = {0};
  for (card = 0; card < HAND; card += 1) {
    rank = hand[card][RANK];
    ranks[rank] += 1;
  }
  for (int i = 0; i < RANKS; i += 1) {
    if (ranks[i] == 4) {
      four = true;
    } else if (ranks[i] == 3) {
      three = true;
    } else if (ranks[i] == 2) {
      pairs += 1;
    }
  }

  /* Check for a royal flush */
  int suits[SUITS] = {0};
  for (card = 0; card < HAND; card += 1) {
    rank = hand[card][RANK];
    suit = hand[card][SUIT];
    switch (rank) {
    case 8:
      suits[suit] += 1;
      break;
    case 9:
      suits[suit] += 1;
      break;
    case 10:
      suits[suit] += 1;
      break;
    case 11:
      suits[suit] += 1;
      break;
    default:
      break;
    }
  }
  for (int i = 0; i < SUITS; i += 1) {
    if (suits[i] == 4) {
      royal_flush = true;
    }
  }
}

void print_result(void) {
  if (royal_flush) {
    printf("Royal flush");
  } else if (straight && flush) {
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
  int player_hand[5][2];

  while (1) {
    read_cards(player_hand);
    analyze_hand(player_hand);
    print_result();
  }
}
