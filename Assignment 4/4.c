#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp;

    printf("Enter employee details:\n");
    printf("ID: ");
    scanf("%d", &emp.id);
    printf("Name: ");
    scanf("%s", emp.name);
    printf("Designation: ");
    scanf("%s", emp.designation);
    printf("Department: ");
    scanf("%s", emp.department);
    printf("Salary: ");
    scanf("%f", &emp.salary);

    printf("\nEmployee details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
