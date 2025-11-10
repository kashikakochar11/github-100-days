//Find sum of all elements in matrix
#include <stdio.h>

// Define the matrix dimensions
#define ROWS 3
#define COLS 3

int main() {
    // 1. Initialize the matrix and necessary variables
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Initialize the sum accumulator
    long long sum = 0; // Use long long for potentially large sums
    int i, j;          // Loop counters

    // 2. Iterate through the matrix using nested loops
    
    // Outer loop for rows
    for (i = 0; i < ROWS; i++) {
        // Inner loop for columns
        for (j = 0; j < COLS; j++) {
            // Add the current element to the running sum
            sum = sum + matrix[i][j];
            // Alternatively: sum += matrix[i][j];
        }
    }

    // 3. Print the result
    printf("--- Matrix Elements ---\n");
    // (Optional: Print the matrix to verify)
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Result ---\n");
    printf("The sum of all elements in the matrix is: %lld\n", sum);

    return 0;
}