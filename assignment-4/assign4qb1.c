#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long factorial(int num) {
    // Base case: factorial of 0 or 1 is 1
    if (num == 0 || num == 1) {
        return 1;
    } else {
        // Recursive case: num * factorial of (num - 1)
        return num * factorial(num - 1);
    }
}

int main() {
    int number;

    // Input from user
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    // Ensure the number is non-negative
    if (number < 0) {
        printf("Error: Factorial of a negative number is not defined.\n");
    } else {
        // Call the factorial function and print the result
        printf("Factorial of %d is %llu\n", number, factorial(number));
    }

    return 0;
}

