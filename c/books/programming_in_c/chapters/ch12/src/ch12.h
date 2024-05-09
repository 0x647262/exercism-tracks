/*
 * Preprocessor directives for ch12 problems.
 *
 * Since these are independent of one another, this _could_ be seperated into
 * #define statements at the beginning of each file. However, to keep with the
 * theme of the chapter I will be using them in a seperate file. This adds a
 * trivial amount of bloat to each binary, but in larger projects, keeping
 * single use #define statements in their respective files keeps the Program
 * from getting too bloates.
 */

/* Prog. 3 - Macro to calculate the minimum of 2 values */
#define MIN(x, y) \
        (((x) > (y)) ? (y) : (x))

/* Prog. 4 - Macro to calculate the maximum value out of 3 values */
#define MAX3(x, y, z) \
        (((x) > (y) && (x) > (z)) ? (x) : 0 || \
         ((y) > (x) && (y) > (z)) ? (y) : 0 || \
         ((z) > (x) && (z) > (y)) ? (z) : 0)

/* Prog. 5 - Marco to perform the shift() function from ch11ex03 */
#define SHIFT(value, n) \
        if ((n) > 0) { (value) <<= (n); } else { (value) >>= -(n); }

/*
 * Prog. 6 - Macro to return a non-zero value if a character is in uppercase
 * Macros can't return, so I'm going to use an external value to flag the
 * number as uppercase.
 */
#define IS_UPPER_CASE(c, flag) \
        if ((c) >= 65 && (c) <= 90) { (flag) = 1; } else { (flag) = 0; }

/* Prog. 7 - Macro to determine if a character is lowercase */
#define IS_LOWER_CASE(c, flag) \
        if ((c) >= 97 && (c) <= 122) { (flag) = 1; } else { (flag) = 0; }

/* Prog. 7 - Macro to determine if a character is alphabetic */
#define IS_ALPHABETIC(c, flag) \
        IS_UPPER_CASE(c, flag) if ((flag) == 2) { IS_LOWER_CASE(c, flag) }

/* Prog. 8 - Macro to determine if a character is a digit */
#define IS_DIGIT(c, flag) \
        if ((c) >= 48 && (c) <= 57) { (flag) = 3; } else { (flag) = 0; }

/* Prog. 8 - Macro to determine if a character is a special character */
#define IS_SPECIAL(c, flag) \
        IS_UPPER_CASE(c, flag) \
        if ((flag) == 0) { IS_LOWER_CASE(c, flag) } \
        if ((flag) == 0) {IS_DIGIT(c, flag) } \
        if ((flag) == 0) { (flag) = 4;}

/* Prog. 9 - Macro to calculate the absolute value of a value/expression */
#define ABSOLUTE_VALUE(x) \
        (((x) < 0) ? -(x) : (x))

