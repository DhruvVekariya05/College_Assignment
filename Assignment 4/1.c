#include <stdio.h>

struct Marks {
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

int main() {
    struct Marks students[5];
    float percentage;

    for (int i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Roll no.: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Chemistry marks: ");
        scanf("%f", &students[i].chem_marks);
        printf("Mathematics marks: ");
        scanf("%f", &students[i].maths_marks);
        printf("Physics marks: ");
        scanf("%f", &students[i].phy_marks);
    }

    printf("\nPercentage of each student in Chemistry:\n");
    for (int i = 0; i < 5; i++) {
        percentage = (students[i].chem_marks / 100) * 100;
        printf("%s scored %.2f%%\n", students[i].name, percentage);
    }

    return 0;
}
