#include <stdio.h>
int main() {
  char character;
  printf("Enter a character");
  scanf("%c", &character);
  if (character >= '0' && character <= '9')
    printf("Character is a digit");
  else if ((character >= 'a' && character <= 'z') ||
           (character >= 'A' && character <= 'Z'))
    printf("Character is an alphabet");
  else
    printf("Character is a special character");
}