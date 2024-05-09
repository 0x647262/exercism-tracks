/*
 * ##### guess.c
 * Asks a user to guess a hidden number.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 100

/* External variable */
static int secret_num;

/* Prototypes */
void initialize_rng(void);
void choose_rand_num(void);
void read_guesses(void);

void initialize_rng(void) {
  /* Initializes the random number generator using the time of day. */
  srand((unsigned)time(NULL));
}

void choose_rand_num(void) {
  /*
   * Randomly selects a number between 1 and MAX_NUM, and stores it in
   * secret_num.
   */
  secret_num = rand() % MAX_NUM + 1;
}

void read_guesses(void) {
  int guess;
  int num_guesses = 0;

  while (1) {
    num_guesses += 1;
    printf("Enter a guess: ");
    scanf("%d", &guess);
    if (guess == secret_num) {
      printf("You won in %d guess(es)!\n", num_guesses);
      return;
    }
    if (guess < secret_num) {
      printf("Too low, try again.\n");
    } else {
      printf("Too high, try again.\n");
    }
  }
}

int main(void) {
  char command;

  printf("Guess the secret number between 1 and %d\n", MAX_NUM);
  initialize_rng();
  do {
    choose_rand_num();
    printf("A New number has been chosen.\n");
    read_guesses();
    printf("Play again? (Y/N): ");
    scanf(" %c", &command);
  } while (command == 'y' || command == 'Y');

  return 0;
}
