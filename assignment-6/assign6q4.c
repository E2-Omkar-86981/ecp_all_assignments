#include <stdio.h>
#include <stdbool.h>

// Function to check if a character exists in string1
bool isCharInString1(char ch, const char* string1) {
    while (*string1 != '\0') {
        if (ch == *string1) {
            return true;  // Character found in string1
        }
        string1++;
    }
    return false;  // Character not found in string1
}

// Function to remove all occurrences of characters in string1 from string2
void removeChars(char* string2, const char* string1) {
    int i = 0, j = 0;

    // Traverse string2
    while (string2[i] != '\0') {
        // If the character is not present in string1, copy it to the new position
        if (!isCharInString1(string2[i], string1)) {
            string2[j++] = string2[i];
        }
        i++;
    }

    // Null-terminate the resulting string
    string2[j] = '\0';
}

int main() {
    char string1[100], string2[100];

    // Input string1
    printf("Enter string1 (characters to remove): ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0';  // Remove newline from fgets

    // Input string2
    printf("Enter string2: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0';  // Remove newline from fgets

    // Call the function to remove all occurrences of characters from string1 in string2
    removeChars(string2, string1);

    // Output the modified string2
    printf("String after removing characters from string1: %s\n", string2);

    return 0;
}

