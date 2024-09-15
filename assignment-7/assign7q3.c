#include <stdio.h>

#define ROWS 3
#define COLS 3

int sumRow(int array[ROWS][COLS], int row) {
    int sum = 0;
    for (int j = 0; j < COLS; j++) {
        sum += array[row][j];
    }
    return sum;
}

int sumColumn(int array[ROWS][COLS], int col) {
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        sum += array[i][col];
    }
    return sum;
}

int main() {
    int array[ROWS][COLS];
    int row, col;

    // Input the 2-D array
    printf("Enter elements for the 3x3 array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Input the row and column for summation
    printf("Enter the row index (0-2) for sum calculation: ");
    scanf("%d", &row);
    if (row < 0 || row >= ROWS) {
        printf("Invalid row index.\n");
        return 1;
    }
    printf("Enter the column index (0-2) for sum calculation: ");
    scanf("%d", &col);
    if (col < 0 || col >= COLS) {
        printf("Invalid column index.\n");
        return 1;
    }

    // Calculate and print the sum of the specified row and column
    printf("Sum of elements in row %d: %d\n", row, sumRow(array, row));
    printf("Sum of elements in column %d: %d\n", col, sumColumn(array, col));

    return 0;
}

