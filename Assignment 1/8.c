#include <stdio.h>

int main() {
    int matrix[100][100];
    int rows, cols, sum = 0;

    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j]; 
            }
        }
    }

    printf("The sum of the diagonal elements in the matrix is %d.\n", sum);

    return 0;
}
