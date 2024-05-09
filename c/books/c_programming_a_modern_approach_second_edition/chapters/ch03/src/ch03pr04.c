/*
 * Write a program that prompts the user to enter a telephone number in the
 * form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx:
 *
 *      Enter a phone number [(xxx) xxx-xxxx]: (404) 817-6900
 *      You entered: 404.817.6900
 */

#include <stdio.h>

int main(void) {
  int a, b, c;

  printf("Enter a phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &a, &b, &c);
  printf("The phone number you entered is: %d.%d.%d\n", a, b, c);

  return 0;
}
