/*
 * Write a function prime() that returns 1 if its argument is a prime number
 * and returns 0 otherwise.
 */

#include <stdio.h>

int sieve_of_eratosthenes(int x);

int sieve_of_eratosthenes(int n) {
  int i, j;
  int primes[n + 1];

  /* Set all values to 0 */
  for (i = 2; i >= 2 && i < n; ++i) {
    primes[i] = 0;
  }

  /* Begin sieve loop */
  for (i = 2; i < n; ++i) {
    for (j = 2; i * j <= n; ++j) {
      primes[i * j] = 1;
    }
  }
  return primes[n];
}

int main(void) {
  int n, test;

  printf("Enter a positive integer: ");
  scanf("%i", &n);

  test = sieve_of_eratosthenes(n);

  if (test == 1) {
    printf("Your number was not prime.\n");
  } else if (test == 0) {
    printf("Your number was prime.\n");
  } else {
    printf("Error: Something unexpected happened\n");
  }

  return 0;
}
