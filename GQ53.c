/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
* */
#include <stdio.h>
int main() {
    int n = 5; // Number of rows for the upper half
    // Upper half
    for (int i = 1; i <= n; i++) // Loop for each row
    {
        for (int j = 1; j <= (2 * i - 1); j++) // Print stars
        {
            printf("*");
        }
        printf("\n");
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) // Loop for each row
    {
        for (int j = 1; j <= (2 * i - 1); j++)// Print stars
         {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}