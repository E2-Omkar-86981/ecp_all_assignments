#include <stdio.h>

// Function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    // Handle edge cases
    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return;
    }
    if (n == 1) {
        printf("0\n");
        return;
    }

    // Variables to store the current and previous terms
    int first = 0, second = 1, next;

    // Print the first two terms
    printf("%d ", first);
    printf("%d ", second);

    // Compute and print the remaining terms
    for (int i = 2; i < n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;  // Move to the next term
        second = next;
    }
    printf("\n"); // Newline after printing all terms
}

int main() {
    int terms;

    // Input from user
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    // Call the function to print Fibonacci series
    printFibonacci(terms);

    return 0;
}

