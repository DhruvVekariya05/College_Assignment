#include <stdio.h>
#include <stdlib.h>
int main() {
  int choice = 0, size = 0;
  int *ptr = NULL;
  printf("===========================================\n");
  printf("1. Allocate Memory using malloc\n");
  printf("2. Allocate Memory using calloc\n");
  printf("===========================================\n");
  printf("Enter Choice: ");
  scanf("%d", &choice);
  printf("Enter Size: ");
  scanf("%d", &size);
  if (choice == 1) ptr = malloc(size * sizeof(int));
  if (choice == 2) ptr = calloc(size, sizeof(int));
  if (ptr == NULL) {
    printf("Memory Allocation Failed");
    return 0;
  }
  printf("Enter Elements: ");
  for (int i = 0; i < size; i++) scanf("%d", &ptr[i]);
  printf("Elements: ");
  for (int i = 0; i < size; i++) printf("%d ", ptr[i]);
  printf("\n");
  ptr = realloc(ptr, size * 2 * sizeof(int));
  if (ptr == NULL) {
    printf("Memory Allocation Failed");
    return 0;
  }
  printf("Enter New Elements: ");
  for (int i = 0; i < size; i++) scanf("%d", &ptr[i]);
  printf("\n");
  printf("Elements: ");
  for (int i = 0; i < size; i++) printf("%d ", ptr[i]);
  free(ptr);
  return 0;
}