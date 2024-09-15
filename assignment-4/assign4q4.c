#include <stdio.h>

// Global variable to indicate an error
int errorFlag = 0;

// Function to perform arithmetic operations
double calculator(double a, double b, char operator) {
    double result;

    // Reset error flag before calculation
    errorFlag = 0;

    switch (operator) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                // Set error flag if division by zero
                errorFlag = 1;
                result = 0; // Result is not valid, return 0
            } else {
                result = a / b;
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            errorFlag = 1; // Set error flag for invalid operator
            result = 0; // Result is not valid, return 0
    }
    return result;
}

int main() {
    double num1, num2;
    char op;

    // Input from user
    printf("Enter first operand: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Space before %c to ignore any previous newline character

    printf("Enter second operand: ");
    scanf("%lf", &num2);

    // Call calculator function
    double result = calculator(num1, num2, op);

    // Handle errors
    if (errorFlag) {
        // Print a message indicating the error
        if (op == '/' && num2 == 0) {
            printf("Error: Division by zero is undefined.\n");
        } else if (op != '+' && op != '-' && op != '*' && op != '/') {
            // Invalid operator message is already printed inside the function
        }
        return 1; // Exit with error code
    }

    // Print result if no errors
    printf("Result: %.2lf\n", result);

    return 0;
}

