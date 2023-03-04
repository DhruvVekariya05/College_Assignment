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

    int is_identity = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j && matrix[i][j] != 1) {
                is_identity = 0; 
                break;
            }
            else if (i != j && matrix[i][j] != 0) {
                is_identity = 0; 
                break;
            }
        }
    }

    if (is_identity) {
        printf("The matrix is an identity matrix.\n");
    }
    else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
