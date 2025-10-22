/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   * */
#include <stdio.h>

int main() {
    int n = 4; // Half the diamond plus the center (number of increasing rows)

    // Top half including center row
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half (excluding center row)
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}