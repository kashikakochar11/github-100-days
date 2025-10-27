//Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>

int second_highest(int a[], int length);

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int length = sizeof(a) / sizeof(a[0]); 
    int result = second_highest(a, length);
    
    if (length < 2) {
        printf("Array must have at least two elements.\n");
    } else {
        printf("Second highest: %d\n", result);
    }
    
    return 0;
}

int second_highest(int a[], int length)
{
    if (length < 2) {
        return INT_MIN; 
    }

    int max1 = INT_MIN; 
    int max2 = INT_MIN; 

    for (int i = 0; i < length; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1; 
            max1 = a[i];
        } 
        else if (a[i] > max2 && a[i] < max1) 
        {
            max2 = a[i];
        }
    }
    
    return max2;
}