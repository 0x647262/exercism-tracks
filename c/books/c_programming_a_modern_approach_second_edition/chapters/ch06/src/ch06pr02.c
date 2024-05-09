/*
 * Write a program that asks the user to enter two integers, then calculates
 * and displays their greatest common divisor (GCD):
 *
 *      Enter two integers: 12, 28
 *      Greatest common divisor: 4
 *
 * Hint: The classic algorithim for computing the GCD known as Euclid's
 * algorithm, goes as follows:
 *
 *      1. Let m and n be variables containing the two numbers.
 *      2. If n is 0, then stop: m contains the GCD.
 *      3. Compute the remainder when m is divided by n.
 *      4. Copy n into m, and copy the remainder into n.
 *      5. Repeat the process, starting with testing whether n is 0.
 *
 * ##### NOTE:
 * This program assumes that m is larger than n!
 */

#include <stdio.h>

int main(void) {
  int m, n, r;

  printf("Enter 2 integers (x, x): ");
  scanf("%d, %d", &m, &n);

  while (n != 0) {
    r = m % n;
    m = n;
    n = r;
  }
  printf("Greatest common divisor: %d\n", m);

  return 0;
}
