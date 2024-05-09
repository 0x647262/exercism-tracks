/*
 * We all know the classic "guessing game" with higher or lower prompts. lets
 * do a role reversal; you create a program that will guess numbers between
 * 1-100, and respond appropriately based on whether users say that the number
 * is too high or too low. Try to make a program that can guess your number
 * based on user input and great code!
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  printf("Enter a number for the program to guess: ");
  int num;
  scanf(" %d", &num);

  // Seed the RNG:
  srand((unsigned)time(NULL));
  int low = 1;
  int high = 100;

  for (;;) {
    int guess;
    do {
      guess = (rand() % 99) + 1;
    } while (guess < low || guess > high);
    printf("The program guessed: %d\n", guess);
    if (guess == num) {
      break;
    }

    printf("Response:\n");
    printf("h = Too high\n");
    printf("l = Too low\n");
    char c;
    scanf(" %c", &c);
    switch (c) {
    case 'h':
      high = guess;
      break;
    case 'l':
      low = guess;
    }
  }
  printf("The program guessed your number!");

  return 0;
}
