/*
 * Modify the program of Programming Project 2 so that it prompts the user to
 * enter the radius of the sphere.
 */

#include <stdio.h>

#define PI 3.14f

int main(void) {
  float radius;

  printf("Enter radius (meters): ");
  scanf("%f", &radius);

  float volume = 4.00f / 3.00f * PI * (radius * radius * radius);
  printf("Sphere volume: %.2f\n", volume);

  return 0;
}
