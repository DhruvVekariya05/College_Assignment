#include <stdio.h>

int main(){
    int empId;
    float salary;
    char gender;
    printf("Enter Employee ID: ");
    scanf("%d", &empId);
    printf("Enter Employee Salary: ");
    scanf("%f", &salary);
    printf("Enter Employee Gender (M/F): ");
    scanf(" %c", &gender);
    int *ptrEmpId = &empId;
    float *ptrSalary = &salary;
    char *ptrGender = &gender;
    printf("Employee ID: %d\n", *ptrEmpId);
    printf("Employee Salary: %f\n", *ptrSalary);
    printf("Employee Gender (M/F): %c\n", *ptrGender);
    
}