#include <stdio.h>
int main(){
    int count = 1;
    char fileName[20];
    printf("Enter file name: ");
    scanf("%s", fileName);
    FILE *file;
    file = fopen(fileName, "r");
    char c;
    c = fgetc(file);
    while (c != EOF) {
        if (c == '\n') count++;
        c = fgetc(file);
    }
    printf("Number of lines: %d", count);
}