#include <stdio.h>
int main() {
  int rows, cols;
  printf("Enter no of rows");
  scanf("%d", &rows);
  printf("Enter no of columns");
  scanf("%d", &cols);
  int matrix[rows][cols];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Enter Element for position (%d,%d)", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }
  int isUpperTriangle = 1;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (i > j && matrix[i][j] != 0) isUpperTriangle = 0;
    }
  }
  if (isUpperTriangle)
    printf("Matrix is Upper Triangle Matrix");
  else
    printf("Matrix is not Upper Triangle Matrix");
}