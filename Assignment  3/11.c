#include <stdio.h>

#define PI 3.14

float areaOfSquare(float *side) { return *side * *side; }
float areaOfCircle(float *radius) { return PI * (*radius) * (*radius); }

int main() {
  float side, radius;
  printf("Enter Side of Square: ");
  scanf("%f", &side);
  printf("Enter Radius of Circle: ");
  scanf("%f", &radius);
  float *ptrSide = &side;
  float *ptrRadius = &radius;
  printf("Area of Square is %.2f\n", areaOfSquare(ptrSide));
  printf("Radius of Circle is %.2f", areaOfCircle(ptrRadius));
  return 0;
}