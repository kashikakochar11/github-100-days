//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int sum(int matrix[][10], int size) {
    int current_sum = 0;
    
 
    for (int i = 0; i < size; i++) {
        current_sum += matrix[i][i];
    }
    
    return current_sum;
}

int main() {
    int N; 
    int matrix[10][10]; 
   
    printf("\n--- Enter %d x %d Matrix Elements ---\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            if (scanf("%d", &matrix[i][j]) != 1) return 1;
        }
    }
    
    int diagonal_sum = sum(matrix, N); 

    printf("\n--- The Entered Matrix ---\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d", matrix[i][j]); 
        }
        printf("\n"); 
    }

    // Display the trace
    printf("\nThe sum of the main diagonal elements (Trace) is: %d\n", diagonal_sum);
    
    return 0;
}