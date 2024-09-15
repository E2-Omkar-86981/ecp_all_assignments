#include <stdio.h>
#include <stdbool.h>

// Function to simulate atoi
int my_atoi(const char* str) {
    int result = 0;
    int sign = 1;  // To handle negative numbers
    
    // Skip any leading whitespace
    while (*str == ' ' || *str == '\t' || *str == '\n') {
        str++;
    }
    
    // Check if the number is negative
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }
    
    // Convert each digit character to its numeric equivalent
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    
    // Apply the sign to the result
    return sign * result;
}

int main() {
    char str[100];
    
    // Input string of digits
    printf("Enter a string of digits: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character
    
    // Call the simulated atoi function
    int num = my_atoi(str);
    
    // Output the numeric result
    printf("The numeric equivalent is: %d\n", num);
    
    return 0;
}

