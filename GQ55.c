/*Q55 (Nested Loops without Arrays/Strings)
Write a program to print all the prime numbers from 1 to n.*/
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("enter the value of n: ");
    scanf("%d", &n);

    printf("The prime numbers from 1 to %d are:\n", n);

    // Outer Loop: Start checking numbers from i = 2 (1 is not prime).
    for (i = 2; i <= n; i++)
    {
        // Inner Loop: Check for factors from j = 2 up to i/2.
        for (j = 2; j <= i / 2; j++)
        {
            // If 'i' is perfectly divisible by 'j', it is NOT prime.
            if (i % j == 0)
            {
                // We found a factor, so we stop checking for this number 'i'.
                break;
            }
        }
        
        // Therefore, if the loop finished its full course, j will be greater than i / 2.
        if (j > i / 2)
        {
            // This condition is TRUE only if 'break' was NOT executed (i is prime).
            printf("%d\n", i);
        }
    }

    return 0;
}