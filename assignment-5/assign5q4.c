#include <stdio.h>

// Function to calculate maximum and minimum of array elements
void findMaxAndMin(int arr[], int size, int *max, int *min) {
    // Initialize max and min with the first element of the array
    *max = arr[0];
    *min = arr[0];

    // Traverse the array to find the max and min values
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
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
    int size;
    int max, min;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    // Accept array elements
    acceptArrayElements(arr, size);

    // Print array elements
    printArrayElements(arr, size);

    // Find max and min values
    findMaxAndMin(arr, size, &max, &min);

    // Output the maximum and minimum values
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}

