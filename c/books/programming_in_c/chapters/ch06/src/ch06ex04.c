/*
 * Modified program to generate prime numbers.
 */

#include <stdio.h>

int main(void) {
  int p, i;
  int primes[50];
  int primeIndex = 2;
  int isPrime;

  primes[0] = 2;
  primes[1] = 3;

  for (p = 5; p <= 50; p = p + 2) {
    isPrime = 1;
    for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i) {
      if (p % primes[i] == 0) {
        isPrime = 0;
      }
    }
    if (isPrime == 1) {
      primes[primeIndex] = p;
      ++primeIndex;
    }
  }
  for (i = 0; i < primeIndex; ++i) {
    printf("%i ", primes[i]);
  }
  printf("\n");

  return 0;
}
