/*
 * Modify Programming Project 14 from Chapter 8 so that it uses a pointer
 * instead of an integer to keep track of the current position in the array
 * that  contains the sentence.
 *
 * ##### Notes:
 *
 * Form:
 *
 *  int array[8];
 *  int *p;
 *                    Print            Print
 *                        |                |
 *      [a] [b] [c] [,] [" "] [d] [e] [f] "."
 *       ^   |   |   |         |   |   ^
 *       p         p + 3     p + 5   p + 7
 *
 * After reading the array, the pointer will be &p = array[7]. A second value
 * may be needed to track where each word ends, so when we increment from
 * p + 5 to p + 7, we don't extend beyond the actual array (or into another
 * word).
 *
 *      p = &words[i];
 *      - Move to beginning of the word
 *      - Print forward to ' ' || '\n'
 *      - Seek backwards to end of the next word
 *      - Break if &words[0] == p
 *      - Loop
 *
 * ##### Spec:
 *
 * Write a program that reverses the words in a sentence:
 *
 *      Enter a sentence: You can cage a swallow can't you?
 *      Reversal of sentence: You can't swallow a cage can you?
 *
 * Hint: Use a loop to read the characters one by one, and store them in a
 * one-dimensional char array. Have the loop stop at a period, question mark,
 * or exclamation point (the terminating character) which is saved in a
 * seperate char variable.  Then use a second loop to search backward through
 * for the array for the beginning of the last word. Print the last word, then
 * search backward for the next-to-last word. Repeat until the beginning of the
 * array is reached. Finally, print the terminating character.
 *
 * ##### Notes:
 *
 *      This is example text.
 *                          ^ = end
 *      |------------------|  = i
 *      |--------------|      = j
 *
 */

#include <stdio.h>

int main(void) {
  int words[40];
  int fin = '0';
  int i = 0;

  printf("Enter a sentence: ");
  while ((words[i] = getchar()) != '\n') {
    if (words[i] == '.' || words[i] == '?' || words[i] == '!') {
      fin = words[i];
      continue;
    }
    i += 1;
  }
  if (words[i] == '\n') {
    i -= 1;
  }

  int *p = &words[i];
  printf("Words reversed: ");
  while (p != &words[0]) {
    i = 0;
    while (*p != ' ') {
      p -= 1;
      i += 1;
      if (*p == ' ') {
        p += 1;
        break;
      }
      if (p == &words[0]) {
        break;
      }
    }
    int j = 0;
    while (p + j <= p + i) {
      if (*(p + j) == '\n' || *(p + j) == ' ') {
        break;
      }
      printf("%c", *(p + j));
      j += 1;
    }
    if (p != &words[0]) {
      while (*p != ' ') {
        p -= 1;
      }
      while (*p == ' ') {
        printf(" ");
        p -= 1;
      }
    }
  }
  printf("%c\n", fin);

  return 0;

  /*
   * This is here for reference:
   *
   *   int *p = &words[0];
   *   printf("Words reversed: ");
   *   while (i > 0) {
   *       while (*(p + i) != ' ') {
   *         i -= 1;
   *         if (*(p + i) == ' ') {
   *             i += 1;
   *             break;
   *         }
   *         if (i == 0) {
   *             break;
   *         }
   *     }
   *     while (*(p + i) != ' ' && *(p + i) != '\n') {
   *         printf("%c", *(p + i));
   *         i += 1;
   *     }
   *     if ((*(p + i)) == '\n' || *(p + i) == ' ') {
   *         i -= 1;
   *     }
   *     while (*(p + i) != ' ' && *(p + i) != '\n') {
   *         i -= 1;
   *         if (i == 0) {
   *             break;
   *         }
   *     }
   *     while (*(p + i) == ' ') {
   *         printf(" ");
   *         i -= 1;
   *     }
   * }
   * printf("\n");
   * printf("i = %d\n", i);
   */
}
