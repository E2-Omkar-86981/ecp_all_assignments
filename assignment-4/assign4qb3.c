#include <stdio.h>

// Recursive function to calculate GCD
int gcd(int a, int b) {
    // Base case: GCD of a number and 0 is the number itself
    if (b == 0) {
        return a;
    }
    // Recursive case: GCD of a and b is GCD of b and a % b
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    // Input from user
    printf("Enter two numbers to calculate their GCD: ");
    scanf("%d %d", &num1, &num2);

    // Ensure both numbers are non-negative
    if (num1 < 0 || num2 < 0) {
        printf("Error: Numbers should be non-negative.\n");
        return 1; // Return with error code
    }

    // Call the gcd function and print the result
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}

