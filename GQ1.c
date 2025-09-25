// Q1Write a program to input two numbers and display their sum.
#include <stdio.h>

int main()
{
    // Declare variables to store the two numbers and their sum
    int num1, num2, sum;

    printf("Enter the first number: ");

    scanf("%d", &num1);

    printf("Enter the second number: ");

    // Read the second number from the user
    scanf("%d", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the sum to the user
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}