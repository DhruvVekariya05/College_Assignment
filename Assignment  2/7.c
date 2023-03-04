#include <stdio.h>

int main(){
    char fileName[20];
    char fileName2[20];
    printf("Enter file name: ");
    scanf("%s", fileName);
    printf("Enter file name to copy to: ");
    scanf("%s", fileName2);
    FILE *file;
    FILE *file2;
    file = fopen(fileName, "r");
    file2 = fopen(fileName2, "w");
    char c;
    c = fgetc(file);
    while (c != EOF) {
        fputc(c, file2);
        c = fgetc(file);
    }
    printf("Contents copied to %s", fileName2);
    fclose(file);
    fclose(file2);
}