#include <cs50.h>
#include <math.h>
#include <stdio.h>

#define VAL_QUARTER 25
#define VAL_DIME 10
#define VAL_NICKEL 5

int main(void) {
  int change = 0;

  while (change <= 0) {
    printf("Changed owed: ");
    float f_change = GetFloat();
    change = (int)roundf(f_change * 100.00f);
  }

  int quarters = change / VAL_QUARTER;
  change -= quarters * VAL_QUARTER;

  int dimes = change / VAL_DIME;
  change -= dimes * VAL_DIME;

  int nickels = change / VAL_NICKEL;
  change -= nickels * VAL_NICKEL;

  int pennies = change;

  int coins_returned = quarters + dimes + nickels + pennies;

  printf("%d\n", coins_returned);

  return 0;
}
