#include <stdio.h>

int main() {
    int matrix[100][100];
    int rows, cols;

    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int is_lower_triangular = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != 0) {
                is_lower_triangular = 0; 
                break;
            }
        }
        if (is_lower_triangular == 0) {
            break;
        }
    }

    if (is_lower_triangular) {
        printf("The matrix is a lower triangular matrix.\n");
    }
    else {
        printf("The matrix is not a lower triangular matrix.\n");
    }

    return 0;
}
