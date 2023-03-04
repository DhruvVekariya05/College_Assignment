#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter B, C: ");
    scanf("%d %d", &b, &c);
    int *ptrA = &a, *ptrB = &b, *ptrC = &c;
    *ptrA = (*ptrB + *ptrC) * (*ptrB - *ptrC) / (*ptrB * *ptrC);
    printf("A = %d", a);
    return 0;
}