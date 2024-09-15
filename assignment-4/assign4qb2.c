#include <stdio.h>

// Recursive function to calculate power
// Function prototype
double power(double base, int exponent);

// Recursive function to calculate power
double power(double base, int exponent) {
    // Base case: Any number to the power of 0 is 1
    if (exponent == 0) {
        return 1;
    }
    // Handle negative exponent
    if (exponent < 0) {
        return 1 / power(base, -exponent);
    }
    // Recursive case: base^exponent = base * base^(exponent - 1)
    return base * power(base, exponent - 1);
}

int main() {
    double base;
    int exponent;

    // Input from user
    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Call the power function and print the result
    printf("%.2lf^%d = %.2lf\n", base, exponent, power(base, exponent));

    return 0;
}

