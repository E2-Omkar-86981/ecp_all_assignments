#include <stdio.h>
#include <stdlib.h> // For NULL

// Function to perform Linear Search and return the address of the element
int* linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return &arr[i]; // Return the address of the element if found
        }
    }
    return NULL; // Return NULL if the element is not found
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
    int size, target;
    int* result;

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
    result = linearSearch(arr, size, target);

    // Output the result of the search
    if (result != NULL) {
        printf("Element %d found at address %p.\n", target, (void*)result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

