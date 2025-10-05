#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Get temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}