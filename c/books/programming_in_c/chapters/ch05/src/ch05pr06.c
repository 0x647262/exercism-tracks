/*
 * Write a program that takes an integer keyed in from the terminal and
 * extracts, and displays each digit of the integer in English. So, id the user
 * types in 932, the program should display
 *
 *      nine three two
 *
 * Remember to display "zero" if the user just types in a 0. (Note, this
 * exercise is a hard one!)
 */

#include <stdio.h>

int main(void) {
  int input, popped;
  int reversed = 0;

  printf("Enter a positive integer: ");
  scanf("%i", &input);

  do {
    popped = input % 10;
    reversed = (reversed * 10) + popped;
    input /= 10;
  } while (input != 0);

  do {
    popped = reversed % 10;
    switch (popped) {
    case 0:
      printf("zero");
      break;
    case 1:
      printf("one");
      break;
    case 2:
      printf("two");
      break;
    case 3:
      printf("three");
      break;
    case 4:
      printf("four");
      break;
    case 5:
      printf("five");
      break;
    case 6:
      printf("six");
      break;
    case 7:
      printf("seven");
      break;
    case 8:
      printf("eight");
      break;
    case 9:
      printf("nine");
      break;
    default:
      printf("?");
    }
    printf(" ");
    reversed /= 10;
  } while (reversed != 0);
  printf("\n");

  return 0;
}
