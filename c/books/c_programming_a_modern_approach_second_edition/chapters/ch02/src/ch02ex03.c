/*
 * ##### dweight2.c
 * Computes the dimensional weight of a box from input provided by the user.
 */

#include <stdio.h>

int main(void) {
  int height, length, width, volume, weight;

  printf("Enter the length of the box: ");
  scanf("%d", &length);
  printf("Enter the width of the box: ");
  scanf("%d", &width);
  printf("Enter the height of the box: ");
  scanf("%d", &height);

  volume = length * width * height;
  weight = (volume + 165) / 166;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Volume (pounds): %d\n", weight);

  return 0;
}
