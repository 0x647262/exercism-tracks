/*
 * The prototypical Internet newbie is a fellow named B1FF, who has a unqiue
 * way of writing messages. Here's a typical B1FF communique:
 *
 *      H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
 *
 * Write a "B1FF filter" that reads a message entered by the user and
 * translates it into B1FF-speak:
 *
 *      Enter message: Hey dude, C is rilly cool
 *      In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
 *
 * Your program should convert the message to upper-case lettersm substitute
 * digits for certain letters ( A-> 4, B -> 8, E -> 3, I -> 1, O -> 0, S -> 5),
 * and then append 10 or so exclamation marks.
 *
 * Hint: Store the original message in an array of characters, then go back
 * through the array, translating and printing characters one by one.
 */

#include <stdio.h>

int main(void) {
  int message[100];
  int i = 0;

  printf("Enter message: ");
  for (i = 0; (message[i] = getchar()) != '\n'; i += 1) {
    ;
  }
  message[i] = '\0';

  for (i = 0; message[i] != '\0'; i += 1) {
    if (message[i] > 96) {
      message[i] -= 32;
    }
    switch (message[i]) {
    case 65:
      message[i] = '4';
      break;
    case 66:
      message[i] = '8';
      break;
    case 69:
      message[i] = '3';
      break;
    case 73:
      message[i] = '1';
      break;
    case 79:
      message[i] = '0';
      break;
    case 83:
      message[i] = '5';
      break;
    default:
      continue;
    }
  }

  printf("In B1FF-speak: ");
  for (i = 0; message[i] != '\0'; i += 1) {
    printf("%c", message[i]);
  }
  printf("!!!!!!!!!!\n");

  return 0;
}
