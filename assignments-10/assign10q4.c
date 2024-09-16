#include <stdio.h>

unsigned char checkAndSetEvenParity(unsigned char byte) {
    int count = 0;
    unsigned char mask = 1;

    for (int i = 0; i < 8; i++) {
        if (byte & mask) {
            count++;
        }
        mask <<= 1;
    }

    if (count % 2 == 0) {
        return byte;
    } else {
        return byte | 0x80;
    }
}

int main() {
    unsigned char byte;
    printf("Enter a byte (0-255): ");
    scanf("%hhu", &byte);

    unsigned char result = checkAndSetEvenParity(byte);

    printf("Byte with even parity: %u\n", result);

    return 0;
}

