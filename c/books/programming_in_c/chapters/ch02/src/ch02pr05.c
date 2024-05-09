/*
 * Identify the syntatic errors in the following program. Then type in and run
 * the corrected program to ensure you have correctly identified all of the
 * mistakes.
 *
 *  0| #include <stdio.h>
 *  1|
 *  2| int main(Void)
 *  3| {
 *  4|      INT sum;
 *  5|      /* COMPUTE RESULT
 *  6|      sum = 25 + 37 - 19
 *  7|      /* DISPLAY RESULT //
 *  8|      printf("The answer is %i\n" sum);
 *  9|      return 0;
 * 10| }
 *
 * Breakdown:
 *
 * Line 2: "Void" -> "void"
 * Line 4: "INT" -> "int"
 * Line 5: Use single line comment "//" in place of broken multi-line one.
 * Line 6: Statement does not end with a semicolon. Append ";" to end of line.
 * Line 7: Use single line comment "//" in place of broken multi-line one.
 * Line 8: Add a comma "," between the last " and sum.
 */

#include <stdio.h>

int main(void) {
  int sum;
  /* Compute result */
  sum = 25 + 37 - 19;
  /* Display result */
  printf("The answer is %i\n", sum);

  return 0;
}
