#include <stdio.h>

// Function to remove duplicate elements from the array
int removeDuplicates(int arr[], int size) {
    if (size == 0) {
        return 0; // No elements to process
    }

    int uniqueCount = 0;

    // Loop to check each element for duplicates
    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < uniqueCount; j++) {
            if (arr[i] == arr[j]) {
                break; // Duplicate found
            }
        }

        // If no duplicate was found, add the element to the unique part of the array
        if (j == uniqueCount) {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    // Return the number of unique elements
    return uniqueCount;
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

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    // Accept array elements
    acceptArrayElements(arr, size);

    // Print array elements before removing duplicates
    printf("Before removing duplicates:\n");
    printArrayElements(arr, size);

    // Remove duplicates and get the number of unique elements
    int uniqueSize = removeDuplicates(arr, size);

    // Print array elements after removing duplicates
    printf("After removing duplicates:\n");
    printArrayElements(arr, uniqueSize);

    // Print the number of unique elements
    printf("Number of unique elements: %d\n", uniqueSize);

    return 0;
}

