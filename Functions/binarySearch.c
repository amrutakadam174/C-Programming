// Function to perform binary search using recursion

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    // Base case: If search range is valid
    if (low <= high) {
        int mid = (low + high) / 2;  // Calculate middle index

        // If element is found at mid
        if (arr[mid] == key)
            return mid;

        // If key is smaller, search the left half
        else if (key < arr[mid])
            return binarySearch(arr, low, mid - 1, key);

        // If key is greater, search the right half
        else
            return binarySearch(arr, mid + 1, high, key);
    }

    // If element is not found
    return -1;
}

int main() {
    // Predefined sorted array
    int arr[] = {2, 4, 6, 8, 10, 12, 14};

    // Calculate size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;  // Element to search

    // User input
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Call the binary search function
    int result = binarySearch(arr, 0, n - 1, key);

    // Display result
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;  // Successful program termination
}
