//Write a program to check if a number is prime.
#include <stdio.h>
int main() 
{
    int number, i, Prime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if number is less than 2
    if (number < 2) {
        Prime = 0; // Numbers less than 2 are not prime
        printf("Invalid input! Please enter a positive integer greater than 1.");
    } else {
        // Check for factors from 2 to the square root of the number
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
            printf("%d is NOT a prime number.\n", number);
                Prime = 0; // Found a factor, so it's not prime 
                break;
            }
        }
        if (Prime) {
            printf("%d is a prime number.\n", number);
        }
return 0;
    }
}