/*
 * Write a program that finds the largest and smallest of four integers entered
 * by the user:
 *
 *      Enter four integer: 21 43 10 35
 *      Largest: 43
 *      Smallest: 10
 *
 * Use as few if statements as possible.
 *
 * Hint: Four if statements are sufficient.
 */

#include <stdio.h>

int main(void) {
  int a, b, c, d;
  int max1, max2;
  int min1, min2;
  int max, min;

  printf("Enter 4 integers (x, x, x, x): ");
  scanf("%d, %d, %d, %d", &a, &b, &c, &d);
  if (a > b) {
    max1 = a;
    min1 = b;
  } else {
    max1 = b;
    min1 = a;
  }
  if (c > d) {
    max2 = c;
    min2 = d;
  } else {
    max2 = d;
    min2 = c;
  }
  if (max1 > max2) {
    max = max1;
  } else {
    max = max2;
  }
  if (min1 > min2) {
    min = min2;
  } else {
    min = min1;
  }
  printf("Largest: %d\n", max);
  printf("Smallest: %d\n", min);

  return 0;
}
