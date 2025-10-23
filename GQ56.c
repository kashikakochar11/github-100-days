//Read and print elements of a one-dimensional array.
#include <stdio.h>
int main()
{
    int array[100], n, i;
    printf("enter the size of array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("enter element %d: ", i);
        scanf("%d", &array[i]);
    }
printf("the elements of array are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}