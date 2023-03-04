#include <stdio.h>
int main() {
  char character;
  printf("Enter a character");
  scanf("%c", &character);
  if (character >= 'a' && character <= 'z')
    printf("Character is in lower case");
  else if (character >= 'A' && character <= 'Z')
    printf("Character is in upper case");
  else
    printf("Character is not an alphabet");
}