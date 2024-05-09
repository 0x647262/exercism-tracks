/*
 * Largest prime factor
 *
 * Problem 3
 * Published on Friday, 2nd November 2001, 06:00 pm; Difficulty rating: 5%
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 *
 * Notes:
 *
 * https://goo.gl/XrI0GM
 *
 */

#include <stdbool.h>
#include <stdio.h>

#define NUMBER 600851475143

long int triptych(long int n);

long int triptych(long int n) {
  int largest_prime = 0;

  if (n % 2 == 0) {
    largest_prime = 2;
    while (n % 2 == 0) {
      n /= 2;
    }
  }

  if (n % 3 == 0) {
    largest_prime = 3;
    while (n % 2 == 0) {
      n /= 3;
    }
  }

  int mult_of_six = 6;
  while (mult_of_six - 1 <= n) {
    if (n % (mult_of_six - 1) == 0) {
      largest_prime = mult_of_six - 1;
      while (n % largest_prime == 0) {
        n /= largest_prime;
      }
    }
    if (n % (mult_of_six + 1) == 0) {
      largest_prime = mult_of_six + 1;
      while (n % largest_prime == 0) {
        n /= largest_prime;
      }
    }
    mult_of_six += 6;
  }
  return largest_prime;
}

int main(void) {
  printf("Largest prime of %ld is: %ld\n", NUMBER, triptych(NUMBER));

  return 0;
}
