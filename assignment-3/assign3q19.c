#include <stdio.h>

void printTable(int num) {
    int i;
    printf("Multiplication table for %d:\n", num);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    printf("\n"); // for separating tables
}

int main() {
    int start, end;
    
    // Input range
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);
    
    // Validate the range
    if(start > end) {
        printf("Invalid range! Starting number should be less than or equal to ending number.\n");
        return 1; // Exit the program
    }
    
    // Loop through the range and print tables
    for(int i = start; i <= end; i++) {
        printTable(i);
    }

    return 0;
}

