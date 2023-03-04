#include <stdio.h>
#include <string.h>
int main() {
  char string[100], subString[100];
  printf("Enter a string");
  scanf("%s", string);
  printf("Enter a substring");
  scanf("%s", subString);
  if (strstr(string, subString) != NULL)
    printf("Substring found");
  else
    printf("Substring not found");
}