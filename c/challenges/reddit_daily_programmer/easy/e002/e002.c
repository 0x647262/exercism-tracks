/*
 * [easy] challenge #2
 * submitted 4 years ago * by nottoobadguy
 *
 * Hello, coders! An important part of programming is being able to apply your
 * programs, so your challenge for today is to create a calculator application
 * that has use in your life. It might be an interest calculator, or it might
 * be something that you can use in the classroom. For example, if you were in
 * physics class, you might want to make a F = M * A calc.
 *
 * EXTRA CREDIT: make the calculator have multiple functions! Not only should
 * it be able to calculate F = M * A, but also A = F/M, and M = F/A!
 */

#include <math.h>
#include <stdio.h>

double simple_interest(double capital, double rate, int time);
double compound_interest(double capital, double rate, int time);
void get_capital(double *capital);
void get_rate(double *rate);
void get_time(int *time);

double simple_interest(double capital, double rate, int time) {
  return capital * (1 + (rate * time));
}

double compound_interest(double capital, double rate, int time) {
  return capital * (double)pow((1 + rate), time);
}

void get_capital(double *capital) {
  printf("Capital: ");
  scanf(" %lf", capital);
}

void get_rate(double *rate) {
  printf("Interest rate: ");
  scanf(" %lf", rate);
}

void get_time(int *time) {
  printf("Years: ");
  scanf(" %d", time);
}

int main(void) {
  printf("\t--- Menu ---\n");
  printf("1 - Calculate simple interest\n");
  printf("2 - Calculate compound interest\n");
  printf("Please enter your selection: ");
  char choice;
  scanf(" %c", &choice);

  double capital;
  double rate;
  int time;
  double earnings;
  switch (choice) {
  case '1':
    get_capital(&capital);
    get_rate(&rate);
    get_time(&time);
    earnings = simple_interest(capital, rate, time);
    printf("Earnings: %.2f\n", earnings);
    break;
  case '2':
    get_capital(&capital);
    get_rate(&rate);
    get_time(&time);
    earnings = compound_interest(capital, rate, time);
    printf("Earnings: %.2f\n", earnings);
    break;
  default:
    printf("Unimplemetned option!\n");
    break;
  }

  return 0;
}
