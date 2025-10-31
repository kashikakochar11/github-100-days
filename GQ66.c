//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int insert(int a[], int n, int e, int c) {
    if (n >= c) {
        return n;
    }

    int i = n - 1;

    while (i >= 0 && a[i] > e) {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = e;

    return n + 1;
}

int main() {
    int arr[10] = {10, 20, 40, 50};
    int current = 4;
    int capacity = 10;
    int element = 30;

    printf("Original: ");
    for (int i = 0; i < current; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    current = insert(arr, current, element, capacity);

    printf("Inserted %d: ", element);
    for (int i = 0; i < current; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    element = 5;
    current = insert(arr, current, element, capacity);
    
    printf("Inserted %d: ", element);
    for (int i = 0; i < current; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}