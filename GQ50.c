/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */
#include <stdio.h>

int main()
{
    int i, j;

    // Outer loop for the rows (i goes from 1 to 5)
    for (i = 1; i <= 5; i++)
    {
        // Inner loop runs for N columns (j=1 to 5)
        for (j = 1; j <= 5; j++)
        {
            if (j < i)
            {
                printf(" "); // Print space
            }
            else
            {
                printf("*"); // Print star
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}