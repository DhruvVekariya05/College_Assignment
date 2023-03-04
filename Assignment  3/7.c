#include <stdio.h>
int isDivisibleBy6(int *num) {
  return *num % 6 == 0;
}
int main() {
  int num;
  printf("Enter Number: ");
  scanf("%d", &num);
  int *ptrNum = &num;
  if (isDivisibleBy6(ptrNum)) {
    printf("Number is Divisible by 6");
  } else {
    printf("Number is not Divisible by 6");
  }
  return 0;
}