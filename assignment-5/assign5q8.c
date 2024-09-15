#include <stdio.h>

// Function to perform Linear Search
int linearSearch(int arr[], int size, int target) {
    // Traverse the array
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return index if target is found
        }
    }
    return -1; // Return -1 if target is not found
}

// Function to accept array elements from the user
void acceptArrayElements(int arr[], int size) {
    printf("Enter %d array elements:\n", size);
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

    // Perform Linear Search
    index = linearSearch(arr, size, target);

    // Output the result of the search
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

