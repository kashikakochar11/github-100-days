
#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2;
    int sum, difference, product;
    float quotient;
    
    // Prompt the user to enter two integers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Perform the arithmetic calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
   
    if (num2 != 0) {
        
        quotient = (float)num1 / num2;
        
        
        printf("\nResults:\n");
        printf("Sum: %d\n", sum);
        printf("Difference: %d\n", difference);
        printf("Product: %d\n", product);
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("\nCannot calculate quotient: Division by zero is not allowed.\n");
    }
    
    return 0;
}