#include <stdio.h>
#include <string.h>  // Include string library

int main() {
    char str[100];  // Declare a string variable

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Using fgets to allow spaces in input

    // Remove newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    // Use strlen() to get the length of the string
    int length = strlen(str);

    // Output the length of the string
    printf("The length of the string is: %d\n", length);

    return 0;
}

