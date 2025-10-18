
#include <stdio.h>

int main()
{
    // Declare variables
    float length, breadth, area, perimeter;

    // enter the length of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    //  enter the breadth of the rectangle
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate the area
    area = length * breadth;

    // Calculate the perimetER
    perimeter = 2 * (length + breadth);

    printf("\nArea of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}