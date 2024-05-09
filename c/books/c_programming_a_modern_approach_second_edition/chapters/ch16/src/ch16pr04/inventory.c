/*
 * Modify the inventory.c program of Section 16.3 by adding a price member to
 * the part structure. The insert() function should ask the user for the price
 * of a new item. The search() and print() functions should display the price.
 * Add a new command that allows the user to change the price of a part.
 */

#include "readline.h"
#include <stdio.h>

#define NAME_LEN_MAX 25
#define PARTS_MAX 100

typedef struct {
  int number;
  char name[NAME_LEN_MAX + 1];
  int available;
  double price;
} Part;

static Part inventory[PARTS_MAX];
static int num_parts = 0;

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int find_part(int number) {
  for (int i = 0; i < num_parts; i += 1) {
    if (inventory[i].number == number) {
      return i;
    }
  }
  return -1;
}

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

  printf("Enter the item's price: ");
  scanf(" %lf", &inventory[num_parts].price);
  num_parts += 1;
}

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

void update() {
  printf("Enter part number: ");
  int number;
  scanf(" %d", &number);

  int i = find_part(number);
  if (i >= 0) {
    printf("Enter change in quantity on hand: ");
    double change;
    scanf(" %lf", &change);
    inventory[i].available += (int)change;

    printf("Update price? (y/n): ");
    int c = getchar();
    if (c == 'y') {
      scanf(" %lf", &change);
      inventory[i].price += change;
    }
  } else {
    printf("Part not found.\n");
  }
}

void print(void) {
  printf("Part Number\tPart Name\tQuantity on Hand\tPrice\n");
  for (int i = 0; i < num_parts; i += 1) {
    printf("%d\t\t%s\t\t%d\t\t\t¤%0.2lf\n", inventory[i].number,
           inventory[i].name, inventory[i].available, inventory[i].price);
  }
}

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
