//symmetric matrix
#include <stdio.h>

int main() {
    int N; // Dimension (N x N)
    int is_symmetric = 1; 
    printf("--- Easy Symmetric Matrix Checker ---\n");
    printf("Enter the size (N) for the square matrix (N x N, max 10): ");
    scanf("%d", &N);
    // Declare the matrix based on the user's input size
    int matrix[10][10]; 
    printf("\n--- Enter %d x %d Matrix Elements ---\n", N, N);
    // 1. Input the elements
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            if (scanf("%d", &matrix[i][j]) != 1) return 1;
        }
    }
    // 2. Check for Symmetry
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) { 
            
            // Check if element at [i][j] equals element at [j][i]
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0; 
            }
        }
    }
    // 3. Print the Result
    printf("\n----------------------------------\n");
    if (is_symmetric) {
        printf("RESULT: The matrix is SYMMETRIC.\n");
    } else {
        printf("RESULT: The matrix is NOT symmetric.\n");
    }
    
    return 0;
}