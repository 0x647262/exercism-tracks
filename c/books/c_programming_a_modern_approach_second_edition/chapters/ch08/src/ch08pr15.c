/*
 * One of the oldest known encryption techniques is the Caesar cipher,
 * attributed to Julius Caeser. It involves raplacing each letter in a message
 * with another letter that is a fixed number of positions later in the
 * alphabet. (If the replacement would go past the letter Z, the cipher "wraps
 * around" to the beginning of the alphabet. For example, if each letter is
 * replaced by the letter two positions after it, then Y would be replaced by
 * A, and Z would be replaced by B.) Write a program that encrypts a message
 * using a Caesar cipher. The user will enter the message to be encrypted, and
 * shift:
 *
 *      Enter message to be encrypted: Go ahead, make my day.
 *      Enter shift amount (1-25): 3
 *      Encrypted message: Jr dkhdg, pdnh pb gdb.
 *
 * Notice that the program can decrypt a message if the user enters 26 minus
 * the original key:
 *
 *      Enter message to be encrypted: Jr dkhg, pdnh pb gdb.
 *      Enter shift amount (1-25): 23
 *      Encrypted message: Go ahead, make my day.
 *
 * You may assume that the message doesn't exceed 80 characters. Characters
 * other than letters should be left unchanged. Lower-case letters remain
 * lower-case when encrypted, and upper-case letters remain upper-case.
 *
 * Hint: To handle the wrap arounf problem, use the expression:
 *
 *      ((ch - 'A') + n)  % 26 + 'A'
 *
 * To calculate the encrypted version of an upper-case letter, where ch stores
 * the letter, and n stores the shift amount. (You'll need a similar expression
 * for the lower-case letters.
 */

#include <stdio.h>

int main(void) {
  int message[80];
  int n;

  printf("Enter message to be encrypted: ");
  int i = 0;
  while (i < 80) {
    message[i] = getchar();
    if (message[i] == '\n') {
      message[i + 1] = '\0';
      break;
    }
    i += 1;
  }

  printf("Enter shift amount (1-25): ");
  scanf("%d", &n);

  for (i = 0; message[i] != '\0'; i += 1) {
    if (message[i] >= 'a' && message[i] <= 'z') {
      message[i] = ((message[i] - 'a') + n) % 26 + 'a';
    } else if (message[i] >= 'A' && message[i] <= 'Z') {
      message[i] = ((message[i] - 'A') + n) % 26 + 'A';
    } else {
      continue;
    }
  }

  printf("Encrypted message: ");
  for (i = 0; message[i] != '\0'; i += 1) {
    printf("%c", message[i]);
  }
  return 0;
}
