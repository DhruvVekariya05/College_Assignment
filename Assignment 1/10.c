#include <stdio.h>

int main() {
    int matrix[100][100];
    int transpose[100][100];
    int rows, cols;

    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    int is_symmetric = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                is_symmetric = 0;
                break;
            }
        }
        if (is_symmetric == 0) {
            break;
        }
    }

    if (is_symmetric) {
        printf("The matrix is a symmetric matrix.\n");
    }
    else {
        printf("The matrix is not a symmetric matrix.\n");
    }

    return 0;
}
