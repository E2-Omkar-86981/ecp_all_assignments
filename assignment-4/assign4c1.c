#include <stdio.h>

// Global variables to store sum and product
int sumResult;
int productResult;

// Function to calculate sum and product using global variables
void calculateSumAndProductGlobal(int a, int b) {
    sumResult = a + b;
    productResult = a * b;
}

// Function to calculate sum and product without using global variables
void calculateSumAndProduct(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int num1, num2;
    int sum, product;

    // Input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Using global variables
    calculateSumAndProductGlobal(num1, num2);
    printf("Using global variables:\n");
    printf("Sum: %d\n", sumResult);
    printf("Product: %d\n", productResult);

    // Using function with pointers
    calculateSumAndProduct(num1, num2, &sum, &product);
    printf("Without using global variables:\n");
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}

