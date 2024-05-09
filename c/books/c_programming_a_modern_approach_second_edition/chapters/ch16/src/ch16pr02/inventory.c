/*
 * Modify the inventory.c program of Section 16.3 so that the p (print)
 * operation displays the parts sorted by part number.
 *
 * Enhancement:
 *      A linked list could hold an arbitrary number of parts. Parts could
 *      easily be added or removed from the list (in order).
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
static int ordered_inventory[PARTS_MAX] = {0};
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
  ordered_inventory[part_number] = 1;

  printf("Enter part name: ");
  read_line(inventory[num_parts].name, NAME_LEN_MAX);

  printf("Enter quantity on hand: ");
  scanf(" %d", &inventory[num_parts].available);
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
    int change;
    scanf(" %d", &change);
    inventory[i].available += change;
  } else {
    printf("Part not found.\n");
  }
}

void print(void) {
  printf("Part Number\tPart Name\tQuantity on Hand\n");
  for (int i = 0; i < PARTS_MAX; i += 1) {
    if (ordered_inventory[i] == 1) {
      for (int j = 0; j < num_parts; j += 1) {
        if (inventory[j].number == i) {
          printf("%d\t\t%s\t\t%d\n", inventory[j].number, inventory[j].name,
                 inventory[j].available);
        }
      }
    }
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
