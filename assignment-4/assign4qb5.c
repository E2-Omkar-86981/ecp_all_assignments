#include <stdio.h>

// Function to print a number in binary format
void printBinary(unsigned int num) {
    // Handle the special case where num is 0
    if (num == 0) {
        printf("0");
        return;
    }

    // Find the highest bit position
    unsigned int mask = 1 << (sizeof(num) * 8 - 1);

    // Skip leading zeros
    int leadingZeroSkipped = 0;

    // Print the binary representation
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        if ((num & mask) == 0) {
            if (leadingZeroSkipped) {
                printf("0");
            }
        } else {
            leadingZeroSkipped = 1;
            printf("1");
        }
        mask >>= 1;
    }
}

int main() {
    unsigned int number;

    // Input from user
    printf("Enter a number to print in binary format: ");
    scanf("%u", &number);

    // Print the binary representation of the number
    printf("Binary representation: ");
    printBinary(number);
    printf("\n");

    return 0;
}

