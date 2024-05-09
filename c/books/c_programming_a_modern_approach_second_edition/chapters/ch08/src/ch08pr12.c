/*
 * Modify Programming Project 5 from Chapter 7 so that the SCRABBLE values of
 * the letters are stored in an array. The array will have 26 elements,
 * corresponding to the 26 letters of the alphabet. For example, element 0 of
 * the array will store 1 (because the SCRABBLE value of A is 1), element 1 of
 * the array will store 3 (because the SCRABBLE value of B is 3), and so forth.
 * As each character of the input word is read, the program will use the array
 * to determine the SCRABBLE vaue of that character. Use an array initializer
 * to set up the array.
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

int main(void) {
  int score = 0;
  int letter;
  int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 6, 5, 1, 3,
                    1, 1, 3, 7, 1, 1, 1, 1, 4, 4, 6, 4, 7};

  printf("Enter a word: ");
  while ((letter = toupper(getchar())) != '\n') {
    score += values[letter - 65];
  }
  printf("Score: %d\n", score);

  return 0;
}
