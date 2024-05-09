/*
 * Modify the inventory.c program of section 16.3 so that the inventory array
 * is allocated dynamically and later reallocated when it fills up. Use malloc
 * initially to allocate enough space for an array of 10 part structures. When
 * the array has no more room for new parts, use realloc to double its size.
 * Repeat the doubling step each time the array becomes full.
 */

#include "readline.h"
#include <stdio.h>

#define NAME_LEN_MAX 25
#define PARTS_MAX 100

typedef struct {
  int number;
  char name[NAME_LEN_MAX + 1];
  int available;
} Part;

static Part inventory[PARTS_MAX];

/* Store the current number of parts */
static int num_parts = 0;

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

/*
 * find_part(): Looks up a part number in the inventory array. Returns the
 *              array index if the part number is found; otherwise returns -1.
 */

int find_part(int number) {
  for (int i = 0; i < num_parts; i += 1) {
    if (inventory[i].number == number) {
      return i;
    }
  }
  return -1;
}

/*
 * insert(): Prompts the user for information abour a new part and then inserts
 *           the part into the database. Prints an error message and returns
 *           prematurely if the part already exists, or if the database is
 *           full.
 */

void insert(void) {
  if (num_parts == PARTS_MAX) {
    printf("Database is full; cannot add more parts!\n");
    return;
  }

  printf("Enter part number: ");
  int part_number;
  scanf(" %d", &part_number);
  if (find_part(part_number) >= 0) {
    printf("Part already exists.\n");
    return;
  }
  inventory[num_parts].number = part_number;

  printf("Enter part name: ");
  read_line(inventory[num_parts].name, NAME_LEN_MAX);

  printf("Enter quantity on hand: ");
  scanf(" %d", &inventory[num_parts].available);
  num_parts += 1;
}

/*
 * search(): Prompts the user to enter a part number, then looks up the part in
 *           the database. If the part exists, prints the name and quantity on
 *           hand; if not, prints an error message.
 */

void search(void) {
  printf("Enter part number: ");
  int number;
  scanf(" %d", &number);
  int i = find_part(number);

  if (i >= 0) {
    printf("Part name: %s\n", inventory[i].name);
    printf("Quantity on hand: %d\n", inventory[i].available);
  } else {
    printf("Part not found!\n");
  }
}

/*
 * update(): Prompts the user to enter a part number. Prints an error message
 *           if the part doesn't exist; otherwise, prompts the user to enter
 *           change in quantity on hand and update the database.
 */

void update() {
  printf("Enter part number: ");
  int number;
  scanf(" %d", &number);

  int i = find_part(number);
  if (i >= 0) {
    printf("Enter change in quantity on hand: ");
    int change;
    scanf(" %d", &change);
    inventory[i].available += change;
  } else {
    printf("Part not found.\n");
  }
}

/*
 * print(): Prints a listing of all parts in the database, showing the part
 *          number, part name, and the quantity on hand. Parts are printed in
 *          the order in which they were entered into the database.
 */

void print(void) {
  printf("Part Number\tPart Name\tQuantity on Hand\n");
  for (int i = 0; i < num_parts; i += 1) {
    printf("%d\t\t%s\t\t%d\n", inventory[i].number, inventory[i].name,
           inventory[i].available);
  }
}

/*
 * main(): Prompts the user to enter an operation code, then calls a function
 *         to perform the requested action. Repeats until the user enters the
 *         command 'q'. Prints an error message if the user enters an illegal
 *         code.
 */

int main(void) {
  char code;

  for (;;) {
    printf("Enter an operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n') {
      ;
    }
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
      printf("Illegal code!\n");
    }
    printf("\n");
  }
}
