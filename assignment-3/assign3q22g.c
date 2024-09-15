#include <stdio.h>

int main() {
    int i, j;
    char ch;

    // Outer loop for each row
    for (i = 0; i < 4; i++) {
        ch = 'A' + i; // Start character for each row

        // Inner loop for printing characters in each row
        for (j = i; j < 4; j++) {
            printf("%c ", ch);
            ch++; // Move to the next character
        }

        printf("\n"); // New line after each row
    }

    return 0;
}

