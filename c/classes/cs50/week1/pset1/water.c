#include <cs50.h>
#include <stdio.h>

#define BOTTLES_PER_MINUTE 12

int main(void) {
  printf("Length of shower in minutes: ");
  int minutes = GetInt();

  int bottles = minutes * BOTTLES_PER_MINUTE;
  printf("Bottles used: %d\n", bottles);

  return 0;
}
