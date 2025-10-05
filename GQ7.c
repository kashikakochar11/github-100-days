//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{

    int a, b;

    printf("Enter the first number A: ");
    scanf("%d", &a);

    printf("Enter the second number B: ");
    scanf("%d", &b);

    printf("\n--- Before Swapping ---\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    a = a + b; // Step 1: Add both numbers and store the result in 'a'
    b = a - b; // Step 2: Subtract the new 'b' from 'a' to get the original 'a'
    a = a - b; // Step 3: Subtract the new 'b' from the new 'a' to get the original 'b'

    printf("\n--- After Swapping ---\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}