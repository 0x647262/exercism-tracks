/*
 * Prime numbers can also be generated by an algorithm known as the Sieve of
 * Eratosthenes.  The algorithim for this procedure is presented here. Write a
 * program that implements this algorithm. Have the program find all prime
 * numbers between up to n = 150. What can you say about this algorithm as
 * compared to the ones used in teh text for calculating prime numbers?
 *
 * Sieve of Eratosthenes Algorithm:
 *
 * To Display All Prime Numbers Between 1 and n
 *
 * Step 1: Define an arry of integers P. Set all elements P[i] to 0,
 *         2 <= i <= n.
 *
 * Step 2: Set i to 2.
 *
 * Step 3: If i > n, the algorithm terminates.
 *
 * Step 4: If P is 0, then i is prime.
 *
 * Step 5: For all positive integer values of j, such that i x j <= n, set
 *         P[i x j] to 1.
 *
 * Step 6: Add 1 to i and go to step 3.
 */

#include <stdio.h>

int main(void) {
  int i, j;
  int primes[150];

  /* Set all values to 0 */
  for (i = 2; i >= 2 && i <= 150; ++i) {
    primes[i] = 0;
  }
  /* Begin sieve loop */
  for (i = 2; i < 150; ++i) {
    for (j = 2; i * j <= 150; ++j) {
      primes[i * j] = 1;
    }
  }
  /* Print loop* */
  for (i = 2; i < 150; ++i) {
    if (primes[i] == 0) {
      printf("%i\n", i);
    }
  }
  return 0;
}