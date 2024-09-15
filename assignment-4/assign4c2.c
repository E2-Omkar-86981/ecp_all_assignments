#include <stdio.h>

// Function to swap two numbers using a temporary variable
void swapWithTemp(int *a, int *b) {
    int temp;
    temp = *a;  // Store the value of a in temp
    *a = *b;    // Assign the value of b to a
    *b = temp;  // Assign the value of temp (original a) to b
}

int main() {
    int num1, num2;

    // Input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swap the numbers
    swapWithTemp(&num1, &num2);

    // Output the swapped values
    printf("After swapping:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    return 0;
}

