#include <stdio.h>

int identify(int *num) {
  if (*num == 0) {
    return 0;
  } else if (*num % 2 == 0) {
    return 1;
  } else {
    return -1;
  }
}

int main() {
  int num;
  printf("Enter Number: ");
  scanf("%d", &num);
  int *ptrNum = &num;
  int result = identify(ptrNum);
  if (result == 0) {
    printf("Number is Zero");
  } else if (result == 1) {
    printf("Number is Even");
  } else {
    printf("Number is Odd");
  }
  return 0;
}