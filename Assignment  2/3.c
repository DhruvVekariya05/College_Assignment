#include <stdio.h>

int main() {
  int choice;
  char fileName[20];
  FILE *file;
  printf("Enter file name: ");
  scanf("%s", fileName);
  printf("-----------------------\n");
  printf("1. Replace content \n");
  printf("2. Append content \n");
  printf("-----------------------\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  if (choice == 1) {
    char content[500];
    char c;
    file = fopen(fileName, "w");
    printf("Enter content: ");
    scanf("%c", &c);
    scanf("%[^\n]s", content);
    fputs(content, file);
  } else if (choice == 2) {
    char content[500];
    char c;
    file = fopen(fileName, "a");
    printf("Enter content: ");
    scanf("%c", &c);
    scanf("%[^\n]s", content);
    fputs(content, file);
  } else {
    printf("Invalid choice");
  }
}