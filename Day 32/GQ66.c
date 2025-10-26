//Delete an element from an array.
#include <stdio.h>
int main()
{
    int arr[100], n, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete the element (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n)
    {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left to overwrite the deleted element
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];    
    }
    n--; // Decrease the size of the array

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}