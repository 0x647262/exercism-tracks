/*
 * Modify the inventory.c program of Section 16.3 by making inventory and
 * num_parts local to the main function.
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

int find_part(Part inventory[PARTS_MAX], int *num_parts, int number);
void insert(Part inventory[PARTS_MAX], int *num_parts);
void search(Part inventory[PARTS_MAX], int *num_parts);
void update(Part inventory[PARTS_MAX], int *num_parts);
void print(Part inventory[PARTS_MAX], int *num_parts);

int find_part(Part inventory[PARTS_MAX], int *num_parts, int number) {
  for (int i = 0; i < *num_parts; i += 1) {
    if (inventory[i].number == number) {
      return i;
    }
  }
  return -1;
}

void insert(Part inventory[PARTS_MAX], int *num_parts) {
  if (*num_parts == PARTS_MAX) {
    printf("Database is full; cannot add more parts!\n");
    return;
  }

  printf("Enter part number: ");
  int part_number;
  scanf(" %d", &part_number);
  if (find_part(inventory, num_parts, part_number) >= 0) {
    printf("Part already exists.\n");
    return;
  }
  inventory[*num_parts].number = part_number;

  printf("Enter part name: ");
  read_line(inventory[*num_parts].name, NAME_LEN_MAX);

  printf("Enter quantity on hand: ");
  scanf(" %d", &inventory[*num_parts].available);
  *num_parts += 1;
}

void search(Part inventory[PARTS_MAX], int *num_parts) {
  printf("Enter part number: ");
  int number;
  scanf(" %d", &number);
  int i = find_part(inventory, num_parts, number);

  if (i >= 0) {
    printf("Part name: %s\n", inventory[i].name);
    printf("Quantity on hand: %d\n", inventory[i].available);
  } else {
    printf("Part not found!\n");
  }
}

void update(Part inventory[PARTS_MAX], int *num_parts) {
  printf("Enter part number: ");
  int number;
  scanf(" %d", &number);

  int i = find_part(inventory, num_parts, number);
  if (i >= 0) {
    printf("Enter change in quantity on hand: ");
    int change;
    scanf(" %d", &change);
    inventory[i].available += change;
  } else {
    printf("Part not found.\n");
  }
}

void print(Part inventory[PARTS_MAX], int *num_parts) {
  printf("Part Number\tPart Name\tQuantity on Hand\n");
  for (int i = 0; i < *num_parts; i += 1) {
    printf("%d\t\t%s\t\t%d\n", inventory[i].number, inventory[i].name,
           inventory[i].available);
  }
}

int main(void) {
  Part inventory[PARTS_MAX];
  int num_parts = 0;
  char code;

  for (;;) {
    printf("Enter an operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n') {
      ;
    }

    switch (code) {
    case 'i':
      insert(inventory, &num_parts);
      break;
    case 's':
      search(inventory, &num_parts);
      break;
    case 'u':
      update(inventory, &num_parts);
      break;
    case 'p':
      print(inventory, &num_parts);
      break;
    case 'q':
      return 0;
    default:
      printf("Illegal code!\n");
    }
    printf("\n");
  }
}
