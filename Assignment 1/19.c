#include <ctype.h>
#include <stdio.h>
#include <string.h>

int isVowel(char character);
int main() {
  char string[100];
  printf("Enter a string");
  scanf("%s", string);
  int vowels = 0, consonants = 0;
  for (int i = 0; i < strlen(string); i++) {
    if (!isalpha(string[i])) continue;
    if (isVowel(string[i]))
      vowels++;
    else
      consonants++;
  }
  printf("Number of vowels is %d", vowels);
  printf("Number of consonants is %d", consonants);
}

int isVowel(char character) {
  if (character == 'a' || character == 'e' || character == 'i' ||
      character == 'o' || character == 'u' || character == 'A' ||
      character == 'E' || character == 'I' || character == 'O' ||
      character == 'U')
    return 1;
  else
    return 0;
}