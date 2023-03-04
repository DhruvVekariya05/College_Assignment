#include <stdio.h>

int main() {
    FILE *file;
    char fileName[100];
    printf("Enter The File Name: ");
    scanf("%s", fileName);
    file = fopen(fileName, "w");
    printf("File Created Succesfully");
    fclose(file);
}