/*
 * Write a pointer version of the sort() function from chapter 7, "Working with
 * Functions." Be certian that pointers are exclusively used by the function,
 * including index variables in the loops.
 *
 * ########## NOTES ##########
 *
 * Skipped. The overwhelming reaction on both Stack Overflow, and
 * #programming was that this is a poor exercise. It would kill the readability
 * of the program by going from:
 *
 *      if (array[i] < array[j])
 *
 * to
 *
 *      if (*(array + i) < *(array + j)
 *
 * Which hurts overall program readability for very little "learning" value.
 */
