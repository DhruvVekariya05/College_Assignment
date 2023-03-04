#include <stdio.h>
void increment(int *num) { *num += 1; }
void decrement(int *num) { *num -= 1; }
int main() {
  int num;
  printf("Enter Number: ");
  scanf("%d", &num);
  int *ptrNum = &num;
  printf("============================\n");
  printf("1. Increment Number by 1\n");
  printf("2. Decrement Number by 1\n");
  printf("============================\n");
  int choice;
  printf("Enter Choice: ");
  scanf("%d", &choice);
  if(choice == 1) {
    increment(ptrNum);
    printf("Number after Increment: %d", *ptrNum);
  } else if(choice == 2) {
    decrement(ptrNum);
    printf("Number after Decrement: %d", *ptrNum);
  } else {
    printf("Invalid Choice");
  }
}