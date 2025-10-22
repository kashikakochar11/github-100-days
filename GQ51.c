/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/
#include <stdio.h>

int main()
{
    // Define the height of the triangle
    const int N = 5;
    int i, j;

    printf("Mirrored Spaced Triangle (N=%d):\n\n", N);

    // Outer loop: Controls the rows (i from 1 to N)
    for (i = 1; i <= N; i++)
    {
    
        // We print (N - i) pairs of spaces to maintain the staggered look.
        for (j = 1; j <= N - i; j++)
        {
            printf("  ");
        }

        // 2. Loop to print 'i' number separated by spaces
        for (j = 1; j <= i; j++)
        {
            printf("%d", N - i + j);

            // Print a space after the number, unless it's the last one in the row
            if (j < i)
            {
                printf(" ");
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}