#include <stdio.h>

int main() {
    int i, j, rows = 5;

    // Outer loop for each row
    for (i = 1; i <= rows; i++) {
        // Inner loop for printing numbers in each row
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}

