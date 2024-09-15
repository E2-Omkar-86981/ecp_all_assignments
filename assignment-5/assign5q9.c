#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate the middle index

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Return the index if found
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        } 
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    return -1; // Return -1 if target is not found
}

// Function to accept array elements from the user
void acceptArrayElements(int arr[], int size) {
    printf("Enter %d array elements in sorted order:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to print array elements
void printArrayElements(int arr[], int size) {
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, target, index;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    // Accept array elements
    acceptArrayElements(arr, size);

    // Print array elements
    printArrayElements(arr, size);

    // Input the target number to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Perform Binary Search
    index = binarySearch(arr, size, target);

    // Output the result of the search
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

