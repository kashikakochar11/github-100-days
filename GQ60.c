// Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main()
{
    int array[100], n, i, positive = 0, negative = 0, zero = 0;
    printf("enter the size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter element %d: ", i);
        scanf("%d", &array[i]);
        if (array[i] > 0)
        {
            positive = positive + 1;
        }
        else if (array[i] == 0)
        {
            zero = zero + 1;
        }
        else
        {
            negative = negative + 1;
        }
    }

    printf("The number of positive elements:%d \nThe number of negative elements:%d \nThe number of zero elements:%d", positive, negative, zero);
    return 0;
}