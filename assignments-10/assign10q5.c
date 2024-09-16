#include <stdio.h>

void checkAndXOR(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        char result = ch ^ 32;
        printf("Original character: %c\n", ch);
        printf("Character after XOR with 32: %c\n", result);
    } else {
        printf("The character is not an alphabet.\n");
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    checkAndXOR(ch);

    return 0;
}

