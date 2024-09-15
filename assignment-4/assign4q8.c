#include <stdio.h>

// Function to return the next term of the Fibonacci series
int nextFibonacciTerm() {
    // Static variables to maintain state between function calls
    static int first = 0;  // The first term of the series
    static int second = 1; // The second term of the series
    int nextTerm;

    // Compute the next term in the series
    nextTerm = first + second;

    // Update the static variables for the next call
    first = second;
    second = nextTerm;

    return nextTerm;
}

int main() {
    int numTerms;

    // Input from user
    printf("Enter the number of terms to generate: ");
    scanf("%d", &numTerms);

    // Print the Fibonacci series
    printf("Fibonacci series:\n");
    for (int i = 0; i < numTerms; i++) {
        printf("%d ", nextFibonacciTerm());
    }
    printf("\n");

    return 0;
}

