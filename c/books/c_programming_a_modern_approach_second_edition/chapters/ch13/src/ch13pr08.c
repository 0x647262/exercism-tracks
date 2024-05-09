/*
 * Modify Programming Project 5 from Chapter 7 so that it includes the
 * following function:
 *
 *      int compute_scrabble_value(const char *word);
 *
 * The function returns the SCRABBLE value of the string pointed to by word.
 *
 * ##### Spec:
 *
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

int compute_scrabble_value(const char *word);

int compute_scrabble_value(const char *word) {
  int letter = 0;
  int score = 0;

  while (word[letter] != '\0') {
    switch (toupper(word[letter])) {
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
      letter += 1;
      break;
    case 'D':
    case 'G':
      score += 2;
      letter += 1;
      break;
    case 'B':
    case 'C':
    case 'M':
    case 'P':
      score += 3;
      letter += 1;
      break;
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
      score += 4;
      letter += 1;
      break;
    case 'K':
      score += 5;
      letter += 1;
      break;
    case 'J':
    case 'X':
      score += 6;
      letter += 1;
      break;
    case 'Q':
    case 'Z':
      score += 7;
      letter += 1;
      break;
    default:
      score += 0;
      letter += 1;
      break;
    }
  }
  return score;
}

int main(void) {
  char word[81];

  printf("Enter a word: ");
  fgets(word, sizeof(word), stdin);
  printf("Score: %d\n", compute_scrabble_value(word));

  return 0;
}
