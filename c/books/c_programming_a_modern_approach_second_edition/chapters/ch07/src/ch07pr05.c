/*
 * In the SCRABBLE Crossword Game, players form words using small tiles, each
 * containing a letter and a face value. The face value varies from one letter
 * to another, based on the letter's rarity. Here are the face values:
 *
 *      1  = A,E,I,L,N,O,R,S,T,U
 *      2  = D,G
 *      3  = B,C,M,P
 *      4  = F,H,V,W,Y
 *      5  = K
 *      8  = J,X
 *      10 = Q,Z
 *
 * Write a program that computes the value of a word by summing the values of
 * its letters:
 *
 *      Enter a word: pitfall
 *      Scrabble value: 12
 *
 * Your program should allow any mixture of lower-case and upper-case letters
 * in the word.
 *
 * Hint: use the toupper() library function.
 */

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int score = 0;
  int letter;

  printf("Enter a word: ");
  while ((letter = getchar()) != '\n') {
    switch (toupper(letter)) {
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
      score += 1;
      break;
    case 'D':
    case 'G':
      score += 2;
      break;
    case 'B':
    case 'C':
    case 'M':
    case 'P':
      score += 3;
      break;
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
      score += 4;
      break;
    case 'K':
      score += 5;
      break;
    case 'J':
    case 'X':
      score += 6;
      break;
    case 'Q':
    case 'Z':
      score += 7;
      break;
    default:
      score += 0;
      break;
    }
  }
  printf("Score: %d\n", score);

  return 0;
}
