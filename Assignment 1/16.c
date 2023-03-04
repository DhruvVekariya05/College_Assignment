#include <stdio.h>
int main() {
  char string[100];
  printf("Enter a string");
  scanf("%s", string);
  int length = 0;
  while (string[length] != '\0') {
    length++;
  }
  printf("Length of string is %d", length);
}