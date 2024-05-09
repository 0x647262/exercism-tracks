// Hacker edition

#include <cs50.h>
#include <stdio.h>

int main(void) {
  int rows = 0;
  do {
    printf("Enter an integer between 0 & 23: ");
    rows = GetInt();
  } while (rows < 0 || rows > 23);

  int current_row = 1;
  while (current_row <= rows) {
    int spaces = rows - current_row;
    while (spaces > 0) {
      printf(" ");
      spaces -= 1;
    }
    int hashes = current_row;
    while (hashes >= 1) {
      printf("#");
      hashes -= 1;
    }
    printf("  ");
    hashes = current_row;
    while (hashes >= 1) {
      printf("#");
      hashes -= 1;
    }
    printf("\n");
    current_row += 1;
  }
  return 0;
}
