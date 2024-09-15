#include <stdio.h>

// Function to print a number in hexadecimal format
void printHexadecimal(unsigned int num) {
    // Special case for zero
    if (num == 0) {
        printf("0");
        return;
    }

    // Array to store hexadecimal digits
    char hexDigits[] = "0123456789ABCDEF";
    char hexString[8 * sizeof(num) + 1]; // Enough space for hexadecimal representation
    int index = 0;

    // Convert number to hexadecimal string
    while (num > 0) {
        int remainder = num % 16; // Get the remainder
        hexString[index++] = hexDigits[remainder]; // Store the corresponding hex digit
        num /= 16; // Divide the number by 16
    }

    // Print hexadecimal string in reverse order
    printf("0x");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexString[i]);
    }
}

int main() {
    unsigned int number;

    // Input from user
    printf("Enter a number to print in hexadecimal format: ");
    scanf("%u", &number);

    // Print the hexadecimal representation of the number
    printf("Hexadecimal representation: ");
    printHexadecimal(number);
    printf("\n");

    return 0;
}

