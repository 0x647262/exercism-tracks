/*
 * Here's a simplified version of the Beaufort scale, which is used to estimate
 * wind force:
 *
 *      Speed (knots)   Description
 *      Less than 1     Calm
 *      1-3             Light air
 *      4-27            Breeze
 *      28-47           Gale
 *      48-63           Storm
 *      Above 63        Hurricane
 *
 * Write a program that asks the user to enter a wind speed (in knots), then
 * displays the corresponding description.
 */

#include <stdio.h>

int main(void) {
  float knots;

  printf("Enter wind speed (knots): ");
  scanf("%f", &knots);

  if (knots < 1) {
    printf("Beaufort scale: Calm\n");
  } else if (knots <= 3) {
    printf("Beaufort scale: Light Air\n");
  } else if (knots <= 27) {
    printf("Beaufort scale: Breeze\n");
  } else if (knots <= 47) {
    printf("Beaufort scale: Gale\n");
  } else if (knots <= 63) {
    printf("Beaufort scale: Storm\n");
  } else {
    printf("Beaufort scale: Hurricane\n");
  }

  return 0;
}
