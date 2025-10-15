//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() {
    int n, binary = 0, place = 1, remainder;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 2;
        binary += remainder * place;
        n /= 2;
        place *= 10;
    }
    printf("Binary representation: %d\n", binary);
    return 0;
}