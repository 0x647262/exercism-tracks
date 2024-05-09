/*
 * The least common multiple (lcm) of two positive integers u anc v is the
 * smallest positive integer that is evenly divisible by both u and v. Thus,
 * the lcm of 15 and 10, written lcm(15, 10), is 30 because 30 is the smallest
 * integer divisible by both 15 and 10. Write a function lcm() that takes two
 * integer arguments and returns their lcm. The lcm() function should calculate
 * the least common multiple by calling the gcd() function from Program 7.6 in
 * accordance with the following identity:
 *
 * lcm (u, v) = uv / gcd(u, v)          u , v >= 0
 *
 */

#include <stdio.h>

int calc_gcd(int u, int v);
int calc_lcm(int u, int v);

int calc_gcd(int u, int v) {
  int temp;

  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }
  return u;
}

int calc_lcm(int u, int v) {
  int lcm = (u * v) / calc_gcd(u, v);

  return lcm;
}

int main(void) {
  int u, v;
  printf("Enter two positive integers (u, v): ");
  scanf("%i, %i", &u, &v);

  if ((u < 0) || (v < 0)) {
    printf("Error: Negative values!\n");
  } else {
    printf("lcm(%i, %i) = %i\n", u, v, calc_lcm(u, v));
  }

  return 0;
}
