#include <stdio.h>

// Function to perform arithmetic operations
// Returns 0 for success, 1 for error (e.g., division by zero)
int calculate(double a, double b, char operator, double *result) {
    switch (operator) {
        case '+':
            *result = a + b;
            return 0; // Success
        case '-':
            *result = a - b;
            return 0; // Success
        case '*':
            *result = a * b;
            return 0; // Success
        case '/':
            if (b == 0) {
                return 1; // Error: Division by zero
            }
            *result = a / b;
            return 0; // Success
        default:
            return 2; // Error: Invalid operator
    }
}

int main() {
    double num1, num2, result;
    char op;
    int error;

    // Input from user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); // Space before %c to skip any leading whitespace
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform the calculation
    error = calculate(num1, num2, op, &result);

    // Display the result or error
    if (error == 0) {
        printf("Result: %.2lf\n", result);
    } else if (error == 1) {
        printf("Error: Division by zero\n");
    } else {
        printf("Error: Invalid operator\n");
    }

    return 0;
}

