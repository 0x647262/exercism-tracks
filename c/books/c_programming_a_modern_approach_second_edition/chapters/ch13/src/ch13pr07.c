/*
 * Modify Programming Project 11 from Chappter 5 so that it uses arrays
 * containing pointers to stings instead of switch statements. For example,
 * instead of using a switch() {} statement to print the for the first digit,
 * use the digit as an index to an array that contains the strings "twenty",
 * "thirty", and so forth.
 *
 * ##### Spec:
 *
 * Write a program that asks the user for a two-digit number, then prints the
 * English word for the number:
 *
 *      Enter a two-digit number: 45
 *      You entered the number: forty-five.
 *
 * Hint: Break the number down into two digits. Use one switch statement to
 * print the word for the first digit ("twenty", "thirty", and so forth). Use a
 * second switch statement to print the word for the second digit. DOn't forget
 * that numbers between 11 and 19 require special treatment.
 */

#include <stdio.h>

int main(void) {
  int tens;
  int ones;
  char *specials[] = {"Ten",      "Eleven",  "Twelve",  "Thirteen",
                      "Fourteen", "Fifteen", "Sixteen", "Seventeen",
                      "Eighteen", "Nineteen"};
  char *tens_place[] = {"",       "",       "Twenty-",  "Thirty-", "Fourty-",
                        "Fifty-", "Sixty-", "Seventy-", "Eighty-", "Ninety-"};
  char *exact_tens[] = {"",      "",      "Twenty",  "Thirty", "Fourty",
                        "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
  char *ones_place[] = {"",     "one", "Two",   "Three", "Four",
                        "Five", "Six", "Seven", "Eight", "Nine"};

  printf("Enter a 2 digit number: ");
  scanf("%1d%1d", &tens, &ones);
  printf("You entered: ");
  if (tens == 1) {
    printf("%s", specials[ones]);
  } else if (tens > 1 && ones != 0) {
    printf("%s%s", tens_place[tens], ones_place[ones]);
  } else {
    printf("%s", exact_tens[tens]);
  }
  printf("\n");

  return 0;
}
