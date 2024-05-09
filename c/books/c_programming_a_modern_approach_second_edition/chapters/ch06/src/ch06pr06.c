/*
 * Write a program that prompts the user to enter an number n, then prints all
 * even squares between 1 and n. Foe example, if the user enters 100, the
 * program should print the following:
 *
 *      4
 *      16
 *      36
 *      64
 *      100
 */

#include <stdio.h>

int main(void) {
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  for (int i = 2; i * i <= num; i += 2) {
    printf("%d\n", i * i);
  }

  return 0;
}
