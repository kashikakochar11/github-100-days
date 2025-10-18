//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main() {
    int num1, num2, gcd;
    printf("Enter two positive integers: ");
    scanf("%d,%d", &num1, &num2);
    // Handle the case where one or both numbers are zero
    if (num1 == 0 && num2 == 0) {
        printf("GCD is undefined for (0, 0).\n");
        return 0; 
    } else if (num1 == 0) {
        gcd = num2;
    } else if (num2 == 0) {
        gcd = num1;
    } else {
       
         int smaller = (num1 < num2) ? num1 : num2;

        while (smaller >= 1) { // Adjusted condition to include 1
            if (num1 % smaller == 0 && num2 % smaller == 0) {
                gcd = smaller;
                break; // Found the GCD
            }
            smaller--;
        }
    }

    printf("GCD of the given numbers is %d\n", gcd);
    return 0;
}