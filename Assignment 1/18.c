#include <stdio.h>
#include <string.h>
int main() {
  char string1[100], string2[100];
  printf("Enter first string");
  scanf("%s", string1);
  printf("Enter second string");
  scanf("%s", string2);
  if (strcmp(string1, string2) == 0)
    printf("Strings are equal");
  else
    printf("Strings are not equal");
}