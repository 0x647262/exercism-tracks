/*
 * Modify Programming Project 4 from Chapter 7 so that the program labels its
 * output:
 *
 *      Enter phone number: 1-800-COL-LECT
 *      In numeric form: 1-800-265-5328
 *
 * The program will need to store the phone number (either in its original
 * form, or in its numeric form) in an array of characters until it can be
 * printed. You may assume that the phone number is no more than 15 characters
 * long.
 *
 * ##### Spec:
 *
 * Write a program that translates an alphabetic phone number into numeric
 * form:
 *
 *      Enter a phone number: CallATT
 *      2255288
 *
 * In case you don't have a telephone nearby, here are the letters on the keys:
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
  char input[15];

  printf("Enter an alphanumeric phone number: ");
  for (int i = 0; i < 15; i += 1) {
    scanf("%c", &input[i]);
    if (input[i] == '\n') {
      break;
    }
  }

  for (int i = 0; i <= 15; i += 1) {
    switch (input[i]) {
    case 'A':
    case 'B':
    case 'C':
      input[i] = '2';
      break;
    case 'D':
    case 'E':
    case 'F':
      input[i] = '3';
      break;
    case 'G':
    case 'H':
    case 'I':
      input[i] = '4';
      break;
    case 'J':
    case 'K':
    case 'L':
      input[i] = '5';
      break;
    case 'M':
    case 'N':
    case 'O':
      input[i] = '6';
      break;
    case 'P':
    case 'R':
    case 'S':
      input[i] = '7';
      break;
    case 'T':
    case 'U':
    case 'V':
      input[i] = '8';
      break;
    case 'W':
    case 'X':
    case 'Y':
      input[i] = '9';
      break;
    default:
      break;
    }
  }

  printf("In numeric form: ");
  for (int i = 0; i < 15; i += 1) {
    printf("%c", input[i]);
    if (input[i] == '\n') {
      break;
    }
  }
  return 0;
}
