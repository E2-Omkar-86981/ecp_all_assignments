#include <stdio.h>

// Function to reverse the array elements
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        // Swap the elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move towards the middle
        start++;
        end--;
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

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    // Accept array elements
    acceptArrayElements(arr, size);

    // Print array elements before reversal
    printf("Before reversal:\n");
    printArrayElements(arr, size);

    // Reverse the array
    reverseArray(arr, size);

    // Print array elements after reversal
    printf("After reversal:\n");
    printArrayElements(arr, size);

    return 0;
}

