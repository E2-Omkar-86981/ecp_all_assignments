#include <stdio.h>
#include <stdbool.h>

// Function to reverse a string
void reverse(char* str) {
    int len = 0, i;
    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to convert an integer to a string with the specified base
char* my_itoa(int num, char* str, int base) {
    int i = 0;
    bool isNegative = false;

    // Handle the case of 0 explicitly
    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    // Handle negative numbers if base is 10
    if (num < 0 && base == 10) {
        isNegative = true;
        num = -num;  // Convert number to positive for processing
    }

    // Process the number and convert each digit
    while (num != 0) {
        int rem = num % base;
        str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';  // Handle digits greater than 9 for base 16
        num = num / base;
    }

    // Add negative sign if needed
    if (isNegative) {
        str[i++] = '-';
    }

    // Null-terminate the string
    str[i] = '\0';

    // Reverse the string since digits were added in reverse order
    reverse(str);

    return str;
}

int main() {
    char str[100];
    int num, base;

    // Input number and base
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the base (2, 8, 10, 16): ");
    scanf("%d", &base);

    // Call the simulated itoa function
    my_itoa(num, str, base);

    // Output the result as a string
    printf("The converted string is: %s\n", str);

    return 0;
}

