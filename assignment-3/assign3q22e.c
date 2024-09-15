#include <stdio.h>

void printLine(char start, int length) {
    // Print increasing part
    for (int i = 0; i < length; i++) {
        printf("%c ", start + i);
    }
    
    // Print decreasing part
    for (int i = length - 2; i >= 0; i--) {
        printf("%c ", start + i);
    }
    
    printf("\n"); // Newline after each row
}

int main() {
    // Print each line manually according to the pattern
    printf("G\n"); // First line

    printLine('E', 3); // Second line (E F G F E)
    printLine('C', 5); // Third line (C D E F G F E D C)
    printLine('A', 7); // Fourth line (A B C D E F G F E D C B A)
    printLine('C', 5); // Fifth line (C D E F G F E D C)
    printLine('E', 3); // Sixth line (E F G F E)

    printf("G\n"); // Last line

    return 0;
}

