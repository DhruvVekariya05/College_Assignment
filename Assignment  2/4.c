#include <ctype.h>
#include <stdio.h>

int main() {
  char c;
  int whitespace = 0;
  int digits = 0;
  char fileName[20];
  FILE *file;
  printf("Enter file name: ");
  scanf("%s", fileName);
  file = fopen(fileName, "r");
  c = fgetc(file);
  while (c != EOF) {
    if (isspace(c)) whitespace++;
    if (isdigit(c)) digits++;
    c = fgetc(file);
  }
  printf("Number of whitespace characters: %d\n", whitespace);
  printf("Number of digits: %d", digits);
  fclose(file);
}