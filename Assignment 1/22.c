#include <stdio.h>
#include <string.h>
int main() {
  char string[100];
  printf("Enter a string");
  scanf("%s", string);
  int length = strlen(string);
  int isPalindrome = 1;
  for (int i = 0; i < length / 2; i++) {
    if (string[i] != string[length - i - 1]) {
      isPalindrome = 0;
      break;
    }
  }
  if (isPalindrome)
    printf("String is palindrome");
  else
    printf("String is not palindrome");
}