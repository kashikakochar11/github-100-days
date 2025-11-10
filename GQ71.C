//
#include <stdio.h>

// Define the matrix dimensions
#define ROWS 3
#define COLS 4

int main() {
    // 1. Declare the 2D array and loop counters
    int matrix[ROWS][COLS];
    int i, j; // i for rows, j for columns

    printf("--- Enter %d elements for the %dx%d matrix ---\n", ROWS * COLS, ROWS, COLS);

    // --- Section 1: READING (Input) ---
    // Outer loop iterates through rows
    for (i = 0; i < ROWS; i++) {
        // Inner loop iterates through columns
        for (j = 0; j < COLS; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            // Read the value and store it at the current (i, j) position
            if (scanf("%d", &matrix[i][j]) != 1) {
                // Basic error handling for invalid input
                printf("Invalid input. Exiting.\n");
                return 1;
            }
        }
    }

    printf("\n--- The Matrix You Entered ---\n");

    // --- Section 2: PRINTING (Output) ---
    // Outer loop iterates through rows
    for (i = 0; i < ROWS; i++) {
        // Inner loop iterates through columns
        for (j = 0; j < COLS; j++) {
            // Print the element followed by a tab (\t) for spacing
            printf("%d\t", matrix[i][j]);
        }
        // Print a newline (\n) after an entire row is printed
        printf("\n");
    }

    return 0;
}