//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main ()
{
    int number, sum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) 
    {
        remainder = number % 10; // Get the last digit
        sum += remainder;         // Add it to sum
        number /= 10;            // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}