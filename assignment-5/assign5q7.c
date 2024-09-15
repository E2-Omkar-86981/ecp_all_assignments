#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Find the index of the minimum element in the unsorted part
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Function to perform Bubble Sort
void bubbleSort(int arr[], int size) {
    int swapped;
    for (int i = 0; i < size - 1; i++) {
        swapped = 0;
        // Traverse the array from the beginning to the unsorted part
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap if the element found is greater than the next element
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        // If no elements were swapped, the array is sorted
        if (!swapped) {
            break;
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
    int choice;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    // Accept array elements
    acceptArrayElements(arr, size);

    // Print array elements before sorting
    printf("Before sorting:\n");
    printArrayElements(arr, size);

    // Choose sorting algorithm
    printf("Choose sorting algorithm:\n");
    printf("1. Selection Sort\n");
    printf("2. Bubble Sort\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    // Sort the array based on user choice
    if (choice == 1) {
        selectionSort(arr, size);
        printf("Array sorted using Selection Sort:\n");
    } else if (choice == 2) {
        bubbleSort(arr, size);
        printf("Array sorted using Bubble Sort:\n");
    } else {
        printf("Invalid choice!\n");
        return 1; // Exit the program with an error code
    }

    // Print array elements after sorting
    printArrayElements(arr, size);

    return 0;
}

