#include <stdio.h>

int main() {
    char ch = 'A'; // Start with 'A'
    int i, j, rows = 4;

    // Outer loop for each row
    for (i = 1; i <= rows; i++) {
        // Inner loop for printing characters in each row
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // Move to the next character
        }
        printf("\n"); // New line after each row
    }

    return 0;
}

