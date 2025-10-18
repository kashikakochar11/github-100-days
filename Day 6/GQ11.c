//Write a program to input an integer and check whether it is even or odd using if–else
#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is an even number.", number);
    } else {
        printf("%d is an odd number.", number);
    }

    return 0;
}