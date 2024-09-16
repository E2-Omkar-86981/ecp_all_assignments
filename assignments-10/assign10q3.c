#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    unsigned int number = atoi(argv[1]);

    displayBinary(number);

    return 0;
}

