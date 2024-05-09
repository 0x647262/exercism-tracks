/*
 * Sum square difference
 *
 * Problem 6
 * Published on Friday, 14th December 2001, 06:00 pm; Difficulty rating: 5%
 *
 * The sum of the squares of the first ten natural numbers is,
 *
 * 	1^2 + 2^2 + ... + 10^2 = 385
 *
 * The square of the sum of the first ten natural numbers is,
 *
 * 	(1 + 2 + ... + 10)^2 = 55^2 = 3025
 *
 * Hence the difference between the sum of the squares of the first ten
 * natural numbers and the square of the sum is 3025 − 385 = 2640.
 *
 * Find the difference between the sum of the squares of the first one hundred
 * natural numbers and the square of the sum.
 */

#define NUMBER 100

#include <stdio.h>

long int square(long int n);
long int sum(long int n);
long int sum_of_squares(long int m);
long int square_of_sums(long int m);

long int square(long int n) { return n * n; }

long int sum(long int n) {
  long int sum = 0;
  for (int i = 1; i < n + 1; i += 1) {
    sum += i;
  }
  return sum;
}

long int sum_of_squares(long int m) {
  long int sum = 0;
  for (int i = 1; i < m + 1; i += 1) {
    sum += square(i);
  }
  return sum;
}

long int square_of_sums(long int m) { return square(sum(m)); }

int main(void) {
  printf("%ld\n", square_of_sums(NUMBER) - sum_of_squares(NUMBER));

  return 0;
}
