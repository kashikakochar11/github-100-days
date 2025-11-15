//
#include <stdio.h>

// Function to insert a new element into a sorted array
int insertSorted(int arr[], int n, int element, int capacity) {
    // 1. Check if the array is full
    if (n >= capacity) {
        printf("Error: Array is full. Cannot insert %d.\n", element);
        return n; // Return the original size
    }

    int i = n - 1;

    // 2. Find the position and shift elements
    // Start from the last element and move right while arr[i] > element
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i]; // Shift element to the right
        i--;
    }

    // 3. Insert the new element at the correct position (i + 1)
    arr[i + 1] = element;

    // Return the new size of the array
    return n + 1;
}

int main() {
    int arr[10] = {10, 20, 40, 50, 60}; // Max capacity of 10
    int current_size = 5;
    int capacity = 10;
    int element_to_insert = 30;

    printf("Original array elements: ");
    for (int i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform the insertion
    current_size = insertSorted(arr, current_size, element_to_insert, capacity);

    printf("Array after inserting %d: ", element_to_insert);
    for (int i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Insert another element to test
    element_to_insert = 5;
    current_size = insertSorted(arr, current_size, element_to_insert, capacity);
    
    printf("Array after inserting %d: ", element_to_insert);
    for (int i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}