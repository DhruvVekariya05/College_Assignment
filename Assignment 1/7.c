#include <stdio.h>

int main() {
    int matrix[100][100];
    int rows, cols, count = 0;

    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] % 2 == 0) {
                count++; 
            }
        }
    }

    printf("There are %d even numbers in the matrix.\n", count);

    return 0;
}
