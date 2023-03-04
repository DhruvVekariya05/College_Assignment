#include <stdio.h>

int main() {
    int matrix1[100][100], matrix2[100][100], result[100][100];
    int rows1, cols1, rows2, cols2;

    printf("Enter number of rows and columns of matrix1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter number of rows and columns of matrix2: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Error: The number of columns of matrix1 should be equal to the number of rows of matrix2.\n");
        return 1;
    }

    printf("Enter elements of matrix1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix2:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The result of matrix multiplication is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
