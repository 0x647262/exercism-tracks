/*
 * Write a program that asks the user for a two-digit number, then prints the
 * English word for the number:
 *
 *      Enter a two-digit number: 45
 *      You entered the number: forty-five.
 *
 * Hint: Break the number down into two digits. Use one switch statement to
 * print the word for the first digit ("twenty", "thirty", and so forth). Use a
 * second switch statement to print the word for the second digit. DOn't forget
 * that numbers between 11 and 19 require special treatment.
 */

#include <stdio.h>

int main(void) {
  int tens;
  int ones;

  printf("Enter a 2 digit number: ");
  scanf("%1d%1d", &tens, &ones);

  printf("You entered: ");
  if (tens == 1) {
    switch (ones) {
    case (0):
      printf("Ten\n");
      break;
    case (1):
      printf("Eleven\n");
      break;
    case (2):
      printf("Twelve\n");
      break;
    case (3):
      printf("Thirteen\n");
      break;
    case (4):
      printf("Fourteen\n");
      break;
    case (5):
      printf("Fifteen\n");
      break;
    case (6):
      printf("Sixteen\n");
      break;
    case (7):
      printf("Seventeen\n");
      break;
    case (8):
      printf("Eighteen\n");
      break;
    case (9):
      printf("Nineteen\n");
      break;
    }
    return 0;
  }
  switch (tens) {
  case (1):
    break;
  case (2):
    printf("Twenty-");
    break;
  case (3):
    printf("Thirty-");
    break;
  case (4):
    printf("Fourty-");
    break;
  case (5):
    printf("Fifty-");
    break;
  case (6):
    printf("Sixty-");
    break;
  case (7):
    printf("Seventy-");
    break;
  case (8):
    printf("Eighty-");
    break;
  case (9):
    printf("Ninety-");
    break;
  }
  switch (ones) {
  case (0):
    printf("\n");
    break;
  case (1):
    printf("one\n");
    break;
  case (2):
    printf("Two\n");
    break;
  case (3):
    printf("Three\n");
    break;
  case (4):
    printf("Four\n");
    break;
  case (5):
    printf("Five\n");
    break;
  case (6):
    printf("Six\n");
    break;
  case (7):
    printf("Seven\n");
    break;
  case (8):
    printf("Eight\n");
    break;
  case (9):
    printf("Nine\n");
    break;
  }
  return 0;
}
