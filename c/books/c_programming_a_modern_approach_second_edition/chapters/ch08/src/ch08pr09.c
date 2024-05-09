/*
 * Write a program that generates a "random walk" across a 10 x 10 array. The
 * array will contain characters (all '.' initially). The program must randomly
 * "walk" from element to element, always going up, down, left, or right by one
 * element. The elements visited by the program will be labeled with the
 * characters A through Z. in the order visited. Here's an example of the
 * desired output:
 *
 *      A . . . . . . . . .
 *      B C D . . . . . . .
 *      . F E . . . . . . .
 *      H G . . . . . . . .
 *      I . . . . . . . . .
 *      J . . . . . . . Z .
 *      K . . R S T U V Y .
 *      L M P Q . . . W X .
 *      . N O . . . . . . .
 *      . . . . . . . . . .
 *
 * Hint: Use the srand and rand functions (see deal.c) to generate random
 * numbers. After generating a number, look at it's remainder when divided by
 * 4. There are four possible values for the remainder--0, 1, 2, and 3--
 * indicating the direction of the next move. Before performing a move, check
 * that:
 *
 *  a. It won't go outside the array.
 *  b. It doesn't take us to an element that already has been visited.
 *
 * If either condition is violated, try moving in another direction. If all
 * four directions are blocked, the program must terminate. Here's an example
 * of premature termination:
 *
 *      A C G H I . . . . .
 *      . C F . J K . . . .
 *      . D E . M L . . . .
 *      . . . . N O . . . .
 *      . . W X Y P Q . . .
 *      . . V U T S T R . .
 *      . . . . . . . . . .
 *      . . . . . . . . . .
 *      . . . . . . . . . .
 *      . . . . . . . . . .
 *
 * Y is blocked on all four sides, so there's not place to put Z.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OPEN 1
#define BLOCKED 0

int main(void) {
  srand((unsigned)time(NULL));
  int board[10][10];
  int x = rand() % 10;
  int y = rand() % 10;
  int letter = 'A';
  int move, up, down, left, right;

  for (int i = 0; i < 10; i += 1) {
    for (int j = 0; j < 10; j += 1) {
      board[i][j] = '+';
    }
  }

  while (letter <= 'Z') {
    board[x][y] = letter;
    letter += 1;
    if ((y - 1 >= 0) && (board[x][y - 1] == '+')) {
      up = OPEN;
    } else {
      up = BLOCKED;
    }
    if ((y + 1 <= 9) && (board[x][y + 1] == '+')) {
      down = OPEN;
    } else {
      down = BLOCKED;
    }
    if ((x - 1 >= 0) && (board[x - 1][y] == '+')) {
      left = OPEN;
    } else {
      left = BLOCKED;
    }
    if ((x + 1 >= 0) && (board[x + 1][y] == '+')) {
      right = OPEN;
    } else {
      right = BLOCKED;
    }
    if (up == BLOCKED && down == BLOCKED && left == BLOCKED &&
        right == BLOCKED) {
      break;
    }

    /*
     * While infficient, this loop makes the next move to random, assuming
     * that there are 2 or more spaces available to move to. Some versions
     * I reviewed tried a new non-random direction (Testing either
     * clockwise, or counterclockwise. Making the move predictable instead
     * of random.
     */

    while (up == OPEN || down == OPEN || left == OPEN || right == OPEN) {
      move = rand() % 4;
      if (move == 0 && up == OPEN) {
        y -= 1;
        break;
      } else if (move == 1 && down == OPEN) {
        y += 1;
        break;
      } else if (move == 2 && left == OPEN) {
        x -= 1;
        break;
      } else if (move == 3 && right == OPEN) {
        x += 1;
        break;
      } else {
        continue;
      }
    }
  }

  /*
   * This portion was left in as an example of using a goto. Generally, one
   * should avoid goto statements at all costs, because they have the
   * potential
   * to end in undefined behavior. I left this in as an example of how to
   * refactor a program and remove goto statements.
   *
   *      for (int c = 'A'; c != 'Z'; c += 1) {
   *          up = down = left = right = 0;
   *          board[x][y] = c;
   *
   *          random_move:
   *          if (up   == 1 && down  == 1 && left == 1 && right == 1) {
   *              break;
   *          }
   *          move = rand() % 4;
   *          switch (move) {
   *          case 0:     // Up
   *              if ((y - 1 >= 0) && (board[x][y - 1] == '+')) {
   *                  y -= 1;
   *                  break;
   *              } else {
   *                  up = 1;
   *                  goto random_move;
   *              }
   *          case 1:     // Down
   *              if ((y + 1 <= 9) && (board[x][y + 1] == '+')) {
   *                  y += 1;
   *                  break;
   *              } else {
   *                  down = 1;
   *                  goto random_move;
   *              }
   *          case 2:     // Left
   *              if ((x - 1 >= 0) && (board[x - 1][y] == '+')) {
   *                  x -= 1;
   *                  break;
   *              } else {
   *                  left = 1;
   *                  goto random_move;
   *              }
   *          default:     // Right
   *              if ((x + 1 <= 9) && (board[x + 1][y] == '+')) {
   *                  x += 1;
   *                  break;
   *              } else {
   *                  right = 1;
   *                  goto random_move;
   *              }
   *          }
   *      }
   */

  for (int i = 0; i < 10; i += 1) {
    printf("\t");
    for (int j = 0; j < 10; j += 1) {
      printf("%c ", board[i][j]);
    }
    printf("\n");
  }
  return 0;
}
