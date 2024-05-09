/*
 * inventory.c
 *
 * Maintins a parts database (linked list version).
 */

#include "readline.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 81

typedef struct Part {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
  struct part *next;
} Part;

/* Points to first part */
static Part *inventory = NULL;

Part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

/*
 * main: Prompts the user to enter an operation code, then calls a function to
 *       perform the requested action. Repeats until the user enters the
 *       command 'q'. Prints an error message if the user enters an illegal
 *       code.
 */

int main(void) {
  char code;

  while (true) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    switch (code) {
    case 'i':
      insert();
      break;
    case 's':
      search();
      break;
    case 'u':
      update();
      break;
    case 'p':
      print();
      break;
    case 'q':
      return 0;
    default:
      printf("Illegal code\n");
    }
    printf("\n");
  }
}

/*
 * find_part: Looks up a part number in the inventory list. Returns a pointer
 *            to the node containing the part number; if the part number is not
 *            found, returns NULL.
 */

Part *find_part(int number) {
  Part *part;

  for (part = inventory; part && number > part->number; part = part->next) {
    ;
  }

  if (part && number == part->number) {
    return part;
  } else {
    return NULL;
  }
}

/*
 * insert: Prompts the user for information about a new part and then inserts
 *         the part into the inventory list; the list remains sorted by part
 *         number. Prints an error message and returns prematurely if the part
 *         already exists or space could not be allocated for the part.
 */

void insert(void) {
  struct part *current;
  struct part *previous;
  struct part *new_node;

  new_node = malloc(sizeof(Part));
  if (!new_node) {
    printf("Database is full; can't add more parts\n");
    return;
  }

  printf("Enter part number: ");
  scanf("%d", &new_node->number);

  for (current = inventory, previous = NULL;
       current && new_node->number > current->number;
       previous = current, current = current->next) {
    ;
  }
  if (current && new_node->number == current->number) {
    printf("Part already exists.\n");
    free(new_node);
    return;
  }

  printf("Enter part name: ");
  read_line(new_node->name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &new_node->on_hand);

  new_node->next = current;
  if (!previous) {
    inventory = new_node;
  } else {
    previous->next = new_node;
  }
}

/*
 * search: Prompts the user to enter a part number, then looks up the part in
 *         the database. If the part exists, prints the name and quantity on
 *         hand; if not, prints an error message.
 */

void search(void) {
  int number;
  Part *part;

  printf("Enter a part number: ");
  scanf("%d", &number);

  part = find_part(number);
  if (part) {
    printf("Part name: %s\n", part->name);
    printf("Quantity on hand: %d\n", part->on_hand);
  } else {
    printf("Part not found.\n");
  }
}

/*
 * update: Prompts the user to enter a part number. Prints an error message if
 *         the part doesn't exist; otherwise, prompts the user to enter change
 *         in quantity on hand and updates the database.
 */

void update(void) {
  int number;
  int change;
  Part *part;

  printf("Enter part number: ");
  scanf(" %d", &number);

  part = find_part(number);
  if (part) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    part->on_hand += change;
  } else {
    printf("Part not found.\n");
  }
}

/*
 * print: Prints a listing of all parts in the database, showing the part
 *        number, part name, and quantity on hand. Part numbers will appear
 *        in ascending order.
 */

void print(void) {
  Part *part;

  printf("Part Number\tPart Name\tQuantity on Hand\n");
  for (part = inventory; part; part = part->next) {
    printf("%d\t\t%s\t\t\t%d\n", part->number, part->name, part->on_hand);
  }
}
