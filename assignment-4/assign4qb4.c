#include <stdio.h>

// Recursive function to calculate the nth Fibonacci term
int fibonacci(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print the first n terms of the Fibonacci series
void printFibonacciSeries(int terms) {
    if (terms <= 0) {
        printf("Number of terms must be positive.\n");
        return;
    }

    printf("Fibonacci series:\n");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int terms;

    // Input from user
    printf("Enter the number of terms to print in the Fibonacci series: ");
    scanf("%d", &terms);

    // Print the Fibonacci series
    printFibonacciSeries(terms);

    return 0;
}

