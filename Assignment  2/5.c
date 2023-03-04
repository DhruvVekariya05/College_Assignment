#include <stdio.h>

int main() {
  int count;
  char fileName[20];
  printf("Enter file name: ");
  scanf("%s", fileName);
  FILE *file;
  file = fopen(fileName, "r");
  char c;
  c = fgetc(file);
  while (c != EOF) {
    count++;
  }
}