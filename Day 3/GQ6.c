//Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main()
{

    int a, b, temp;

    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    printf("\n--- Before Swapping ---\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    temp = a;
    a = b;
    b = temp;
    printf("\n--- After Swapping ---\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}