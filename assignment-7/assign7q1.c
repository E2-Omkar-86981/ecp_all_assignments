#include <stdio.h>

// Function to accept a 2-D array from the user
void input2DArray(int rows, int cols, int array[rows][cols]) {
    printf("Enter elements for the %d x %d array:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

// Function to print a 2-D array
void print2DArray(int rows, int cols, int array[rows][cols]) {
    printf("The %d x %d array is:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    
    // Input dimensions of the array
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    // Declare the 2-D array
    int array[rows][cols];
    
    // Call function to accept the 2-D array from the user
    input2DArray(rows, cols, array);
    
    // Call function to print the 2-D array
    print2DArray(rows, cols, array);
    
    return 0;
}

