/*
 * Program 5.10 has several inefficiencies. One inefficiency results from
 * checking even numbers. Because it is obvious that any even number greater
 * than 2 cannot be prime, the program could simply skip all even numbers
 * as possible primes and as possible divisors. The inner for loop is also
 * inefficient because the value of p is always divided all values of d from 2
 * to p - 1. This inefficency could be avoided by adding a test for the value
 * of isPrime in the conditions of the for loop. In this manner, the for loop
 * could be set up to continue as long as no divisor was found and the value
 * of d was less than p. Modify program 5.10 to incorperate these two changes.
 * Then run the program to verify it's operation. (Note: In Chapter 6, you
 * discover even more efficient ways of generating prime numbers.)
 *
 * Notes:
 *
 * [X] - Change 1: Any even number greater than 2 cannot be prime.
 *
 * [?] - Change 2: Add a test for the value of isPrime in the conditions of the
 *       for loop. Then loop as long as no divisor is found and the value of p
 * was
 *       less than d
 */

#include <stdio.h>

int main(void) {
  int p, d, is_prime;

  for (p = 2; p <= 50; ++p) {
    if (p % 2 == 0 && p != 0) {
      is_prime = 0;
    }
    is_prime = 1;
    for (d = 2; d < p && is_prime == 1; ++d) {
      if (p % d == 0) {
        is_prime = 0;
      }
    }
    if (is_prime != 0) {
      printf("%i ", p);
    }
  }
  printf("\n");

  return 0;
}
