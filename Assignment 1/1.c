#include <stdio.h>

int main() {
    int matrix[100][100]; 
    int rows, cols;

    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
