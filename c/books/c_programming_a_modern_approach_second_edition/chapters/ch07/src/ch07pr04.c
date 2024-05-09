/*
 * Write a program that translates an alphabetic phone number into numeric
 * form:
 *
 *      Enter a phone number: CallATT
 *      2255288
 *
 * In case you don't have a telephone nearby, here are the leters on the keys:
 *
 *      2 = A,B,C
 *      3 = D,E,F
 *      4 = G,H,I
 *      5 = J,K,L
 *      6 = M,N,O
 *      7 = P,R,S
 *      8 = T,U,V
 *      9 = W,X,Y
 *
 * If the original phone number contains nonalphabetic characters (digits or
 * punctuation, for example), leave them unchanged:
 *
 *      Enter phone number: 1-8000-COL-LECT
 *      1-800-265-5328
 *
 * You may assume that any letters entered by the user are upper case.
 */

#include <stdio.h>

int main(void) {
  int input;

  printf("Enter an alphanumeric phone number: ");
  while ((input = getchar()) != '\n') {
    switch (input) {
    case 'A':
    case 'B':
    case 'C':
      printf("2");
      break;
    case 'D':
    case 'E':
    case 'F':
      printf("3");
      break;
    case 'G':
    case 'H':
    case 'I':
      printf("4");
      break;
    case 'J':
    case 'K':
    case 'L':
      printf("5");
      break;
    case 'M':
    case 'N':
    case 'O':
      printf("6");
      break;
    case 'P':
    case 'R':
    case 'S':
      printf("7");
      break;
    case 'T':
    case 'U':
    case 'V':
      printf("8");
      break;
    case 'W':
    case 'X':
    case 'Y':
      printf("9");
      break;
    default:
      putchar(input);
    }
  }
  printf("\n");

  return 0;
}
