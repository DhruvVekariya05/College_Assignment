#include <stdio.h>

int smallest(int *num1, int *num2) { return *num1 > *num2 ? *num1 : *num2; };
int main() { 
    int num1, num2;
    printf("Enter a number");
    scanf("%d", &num1);
    printf("Enter a second number");
    scanf("%d", &num2);
    printf("Smallest number among both of these is %d", smallest(&num1, &num2));
}