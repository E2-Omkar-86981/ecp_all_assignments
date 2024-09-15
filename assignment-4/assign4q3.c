#include <stdio.h>

// Function to perform arithmetic operations
double calculator(double a, double b, char operator) {
    double result;

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
            // Handle division by zero
            if (b == 0) {
                printf("Error: Division by zero is undefined.\n");
                return 0; // Return 0 for error case
            }
            result = a / b;
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 0; // Return 0 for error case
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

    // Call calculator function and display result
    double result = calculator(num1, num2, op);
    if (op == '/' && num2 == 0) {
        // Division by zero case is already handled inside the function
        return 1; // Exit with error code
    }
    printf("Result: %.2lf\n", result);

    return 0;
}

