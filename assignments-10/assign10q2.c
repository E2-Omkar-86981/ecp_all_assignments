#include <stdio.h>

void displayBinary(unsigned int num) {
    int i;
    unsigned int mask = 1 << (sizeof(num) * 8 - 1);
    int leadingZero = 1;

    for (i = 0; i < sizeof(num) * 8; i++) {
        if (num & mask) {
            leadingZero = 0;
            printf("1");
        } else if (!leadingZero) {
            printf("0");
        }
        mask >>= 1;
    }
    if (leadingZero) {
        printf("0");
    }
    printf("\n");
}

int main() {
    unsigned int number;
    printf("Enter a number: ");
    scanf("%u", &number);

    displayBinary(number);

    return 0;
}

