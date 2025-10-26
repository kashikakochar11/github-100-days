//Insert an element in an array at a given position
#include <stdio.h>
int main()
{
    int arr[100], n, pos, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert the new element (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n)
    {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right to make space for the new element
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = element;
    n++; // Increase the size of the array

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}   