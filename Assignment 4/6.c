#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    int roll_num;
    int birth_day;
    int birth_month;
    int birth_year;
    int admission_day;
    int admission_month;
    int admission_year;
};

int main() {
    struct student s;
    int age;
    printf("Enter student name: ");
    fgets(s.name, 50, stdin);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_num);
    printf("Enter birthday (dd mm yyyy): ");
    scanf("%d %d %d", &s.birth_day, &s.birth_month, &s.birth_year);
    printf("Enter admission date (dd mm yyyy): ");
    scanf("%d %d %d", &s.admission_day, &s.admission_month, &s.admission_year);
    age = s.admission_year - s.birth_year;
    if (s.admission_month < s.birth_month || (s.admission_month == s.birth_month && s.admission_day < s.birth_day)) {
        age--;
    }
    printf("\nStudent Information:\n");
    printf("Name: %s", s.name);
    printf("Roll Number: %d\n", s.roll_num);
    printf("Age at time of admission: %d\n", age);

    return 0;
}