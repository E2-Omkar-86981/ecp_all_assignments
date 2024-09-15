#include <stdio.h>

// Function to remove all occurrences of a given character from a string
void removeChar(char* str, char ch) {
    int i = 0, j = 0;
    
    // Traverse the string
    while (str[i] != '\0') {
        // If the current character is not the one to be removed, copy it
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    
    // Null-terminate the resulting string
    str[j] = '\0';
}

int main() {
    char str[100];
    char ch;
    
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';
    
    // Input the character to remove
    printf("Enter the character to remove: ");
    scanf("%c", &ch);
    
    // Call function to remove the character
    removeChar(str, ch);
    
    // Output the modified string
    printf("String after removing '%c': %s\n", ch, str);
    
    return 0;
}

