//add 2 matrix 
#include <stdio.h>

int main() {
    int rows, cols;

    // Input the dimensions of the matrices
    printf("Enter the number of rows and columns -\n");
    scanf("%d %d", &rows, &cols);

    // Declare the matrices
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Input elements of the first matrix
    printf("\nEnter elements of the first matrix -\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("\nEnter elements of the second matrix -\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix addition
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the result matrix
    printf("\nResultant matrix after addition -\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}