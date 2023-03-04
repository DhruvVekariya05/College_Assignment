#include <stdio.h>
#include <string.h>
int main() {
  char string1[100], string2[100];
  printf("Enter a string");
  scanf("%s", string1);
  strncpy(string2, string1, strlen(string1));
  printf("Copied string is %s", string2);
}