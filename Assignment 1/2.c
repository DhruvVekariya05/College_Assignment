#include <stdio.h>

int main() {
    int matrix[100][100][100]; 
    int dim1, dim2, dim3;

    printf("Enter dimensions of the matrix (in the order of size): ");
    scanf("%d %d %d", &dim1, &dim2, &dim3);

    
    printf("Enter matrix elements:\n");
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }

    printf("The matrix is:\n");
    for (int i = 0; i < dim1; i++) {
        printf("Dimension 1 = %d\n", i);
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                printf("%d ", matrix[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}
