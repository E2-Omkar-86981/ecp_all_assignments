#include <stdio.h>

// Function to print a character a given number of times
void printChar(char ch, int times) {
    // Check if the number of times is non-negative
    if (times < 0) {
        printf("Error: Number of times cannot be negative.\n");
        return;
    }

    // Print the character 'times' number of times
    for (int i = 0; i < times; i++) {
        printf("%c", ch);
    }
    printf("\n"); // Newline after printing all characters
}

int main() {
    char character;
    int numTimes;

    // Input from user
    printf("Enter a character to print: ");
    scanf(" %c", &character); // Space before %c to ignore any previous newline character

    printf("Enter the number of times to print the character: ");
    scanf("%d", &numTimes);

    // Call the printChar function
    printChar(character, numTimes);

    return 0;
}

