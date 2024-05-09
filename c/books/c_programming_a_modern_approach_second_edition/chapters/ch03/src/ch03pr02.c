/*
 * Write a program that formats product information entered by the user. A
 * session with the program should look like this:
 *
 *      Enter item number: 583
 *      Enter item price: 13.5
 *      Enter purchase date (mm/dd/yy): 10/24/2010
 *
 *      Item    Unit            Purchase
 *              Price           Date
 *      583     $  13.50        10/24/2010
 *
 * The item number and date should be left justified: the unit price should be
 * right justified. Allow dollar amounts up to 99999.99.
 *
 * Hint: Use tabs to line up the columns!
 */

#include <stdio.h>

int main(void) {
  int n;
  int yy, mm, dd;
  float f;

  printf("Enter item number: ");
  scanf("%d", &n);
  printf("Enter unit price: ");
  scanf("%f", &f);
  printf("Purchase date (yyyy/mm/dd): ");
  scanf("%d/%d/%d", &yy, &mm, &dd);

  printf("Item\tUnit\t\tPurchase\n");
  printf("\tPrice\t\tDate\n");
  printf("%-d\t$%7.2f\t%-.4d/%.2d/%.2d\n", n, f, yy, mm, dd);

  return 0;
}
