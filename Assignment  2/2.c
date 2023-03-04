#include <stdio.h>
int main() { 
    FILE *file, *file2;
    char c;
    file = fopen("hello.txt", "r");
    file2 = fopen("demo.txt", "w");
    c = fgetc(file);
    while (c != EOF) {
        fputc(c, file2);
        c = fgetc(file);
    }   
    printf("Contents copied to demo.txt");
    fclose(file);
    fclose(file2);
      return 0;
}