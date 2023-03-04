#include <stdio.h>

int main() {
    int count = 0;
    char fileName[20];
    printf("Enter file name: ");
    scanf("%s", fileName);
    FILE *file;
    file = fopen(fileName, "r");
    char c;
    char str[100];
    c = fscanf(file, "%s", str);
    while (c != EOF) {
        count++;
        c=fscanf(file, "%s", str);
    }
    printf("Number of words: %d", count);
}