#include <stdio.h>

int main() {
  char fileName[20];
  printf("Enter file name: ");
  scanf("%s", fileName);
  FILE *file;
  file = fopen(fileName, "r");
  char c;
  while (c != EOF) {
    printf("%c", c);
    c = fgetc(file);
  }
  printf("\n---------Rewinding---------\n");
  rewind(file);
  c = fgetc(file);
  while (c != EOF) {
    printf("%c", c);
    c = fgetc(file);
  }
}