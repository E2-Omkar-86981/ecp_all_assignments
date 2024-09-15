#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number;

    // Input from user
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        unsigned long long result = factorial(number);
        printf("Factorial of %d is %llu\n", number, result);
    }

    return 0;
}

