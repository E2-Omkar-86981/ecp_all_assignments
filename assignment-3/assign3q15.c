#include <stdio.h>

typedef enum menu { EXIT, ADD, SUB, MUL, DIV } MENU;

// Function prototypes
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
void division(int a, int b);

int main() {
    int n1, n2, res;
    MENU ch;

    do {
        printf("Enter Number 1: ");
        scanf("%d", &n1);

        printf("Enter Number 2: ");
        scanf("%d", &n2);

        printf("0. Exit\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        printf("Your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case EXIT:
                printf("Bye Bye....\n");
                break;
            case ADD:
                res = addition(n1, n2);
                printf("Addition = %d\n", res);
                break;
            case SUB:
                res = subtraction(n1, n2);
                printf("Subtraction = %d\n", res);
                break;
            case MUL:
                res = multiplication(n1, n2);
                printf("Multiplication = %d\n", res);
                break;
            case DIV:
                division(n1, n2);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (ch != EXIT);

    return 0;
}

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

void division(int a, int b) {
    if (b == 0) {
        printf("Error: Cannot divide by zero.\n");
    } else {
        float result = (float)a / b; // Use float for decimal results
        printf("Division = %.2f\n", result);
    }
}

