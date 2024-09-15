#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate binomial coefficient (nCr)
unsigned long long binomialCoeff(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int rows) {
    for (int n = 0; n < rows; n++) {
        // Print leading spaces for formatting
        for (int space = 0; space < rows - n - 1; space++) {
            printf(" ");
        }

        // Print the values in the current row
        for (int r = 0; r <= n; r++) {
            printf("%llu ", binomialCoeff(n, r));
        }
        printf("\n"); // New line after each row
    }
}

int main() {
    int rows;

    // Input from user
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // Call the function to print Pascal's Triangle
    printPascalsTriangle(rows);

    return 0;
}

