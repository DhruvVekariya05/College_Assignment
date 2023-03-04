#include <stdio.h>
float diff(float *num1, float *num2) {
  return *num1 - *num2;
}
int main() {
  float num1, num2;
  printf("Enter Number 1: ");
  scanf("%f", &num1);
  printf("Enter Number 2: ");
  scanf("%f", &num2);
  float *ptrNum1 = &num1;
  float *ptrNum2 = &num2;
  printf("Difference between %f and %f is %f", *ptrNum1, *ptrNum2, diff(ptrNum1, ptrNum2));
  return 0;
}