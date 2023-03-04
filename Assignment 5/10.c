#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node *addr;
};

int main() {
  int len = 0;
  printf("Enter Length of the Linked List:");
  scanf("%d", &len);
  struct Node *head = malloc(sizeof(struct Node));
  struct Node *current = head;
  for (int i = 0; i < len; i++) {
    printf("Enter Data for Node %d:", i + 1);
    scanf("%d", &current->data);
    if (i != len - 1) {
      current->addr = malloc(sizeof(struct Node));
      current = current->addr;
    }
  }
  current->addr = NULL;
  current = head;
  printf("Positive Number in Linked List: ");
  while (current != NULL) {
    if (current->data > 0) printf("%d ", current->data);
    current = current->addr;
  }
  current = head;
  printf("\nNegative Number in Linked List: ");
  while (current != NULL) {
    if (current->data < 0) printf("%d ", current->data);
    current = current->addr;
  }
  current = head;
  printf("\nZero in Linked List: ");
  while (current != NULL) {
    if (current->data == 0) printf("%d ", current->data);
    current = current->addr;
  }
}