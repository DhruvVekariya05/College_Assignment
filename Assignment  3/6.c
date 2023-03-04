#include <stdio.h>
int isEven(int *num) {
  return *num % 2 == 0;
}
int main() {
  int num;
  printf("Enter Number: ");
  scanf("%d", &num);
  int *ptrNum = &num;
  if (isEven(ptrNum)) {
    printf("Number is Even");
  } else {
    printf("Number is Odd");
  }
  return 0;
}