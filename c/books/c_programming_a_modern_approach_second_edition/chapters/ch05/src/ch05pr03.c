/*
 * Modify the broker.c program of section 5.2 by making both of the following
 * changes:
 *
 * (a) Ask the user to enter the number of share and the price per share,
 *     instead of the value of the trade.
 *
 * (b) Add statements that compute the commission charged by a rival broker
 *     ($33 + 3c per share for fewer than 2000 shares; $33 + 2c per share for
 *     2000 shares or more). Display the rival's commission as well as the
 *     commission charged by the original broker.
 */

#include <stdio.h>

int main(void) {
  int shares;
  float commission;
  float price;
  float value;

  printf("Enter the number of shares: ");
  scanf("%d", &shares);
  printf("Enter the value of the shares: ");
  scanf("%f", &price);

  value = (shares * price);
  if (value < 2500.00f) {
    commission = 30.00f + 0.017f * value;
  } else if (value < 6250.00f) {
    commission = 56.00f + 0.0066f * value;
  } else if (value < 20000.00f) {
    commission = 76.00f + 0.0034f * value;
  } else if (value < 50000.00f) {
    commission = 100.00f + 0.0022f * value;
  } else {
    commission = 255.00f + 0.0009f * value;
  }
  if (commission < 39.00f) {
    commission = 39.00f;
  }
  printf("Broker #1's commission: $%.2f\n", commission);

  if (shares < 2000) {
    commission = 33.00f + (0.0f * shares);
  } else {
    commission = 33.00f + (0.02f * shares);
  }
  printf("Broker #2's commission: $%.2f\n", commission);

  return 0;
}
