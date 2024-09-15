#include <stdio.h>

#define SIZE 3

void addMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE];
    int result[SIZE][SIZE];
    
    printf("Enter elements for matrix 1:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for matrix 2:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Matrix 1:\n");
    printMatrix(matrix1);
    
    printf("Matrix 2:\n");
    printMatrix(matrix2);

    addMatrices(matrix1, matrix2, result);
    printf("Addition of matrices:\n");
    printMatrix(result);

    subtractMatrices(matrix1, matrix2, result);
    printf("Subtraction of matrices:\n");
    printMatrix(result);

    multiplyMatrices(matrix1, matrix2, result);
    printf("Multiplication of matrices:\n");
    printMatrix(result);

    return 0;
}

