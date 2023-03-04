#include <stdio.h>
#include <string.h>
int main(){
    char fileName[20];
    char data[100];
    char readData[100];
    printf("Enter file name: ");
    scanf("%s", fileName);
    FILE *file;
    file = fopen(fileName, "w+");
    char c;
    printf("Enter characters: ");
    scanf("%c", &c);
    scanf("%[^\n]", data);
    fwrite(data, strlen(data)+1, 1, file);
    
    fseek(file, 0, SEEK_SET);

    fread(readData, strlen(data)+1, 1, file);
    printf("Data read: %s", readData);
    fclose(file);
}