//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int number;
    
    // Prompt the user for input
    printf("Enter an integer to check if it is a palindrome: ");
    // Read the integer input
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    // Negative numbers are not palindromes
    if (number < 0) {
        printf("%d is NOT a palindrome number.\n", number);
        return 0;
    }
    // Store the original number for the final comparison
    int original = number;
    long long reversed = 0; // Use long long for safety against overflow when reversing

    int temp = original; // Use a temporary variable for manipulation

    // Loop to reverse the number
    while (temp > 0) {
        // 1. Get the last digit
        int remainder = temp % 10;
        
        // 2. Build the reversed number
        reversed = reversed * 10 + remainder;
        
        // 3. Remove the last digit from the temporary number
        temp /= 10;
    }

    // Compare and print the result
    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is NOT a palindrome number.\n", original);
    }

    return 0;
}