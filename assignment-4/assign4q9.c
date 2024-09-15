#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

// Function to print prime numbers in a given range
void printPrimesInRange(int start, int end) {
    if (start > end) {
        printf("Invalid range: start should be less than or equal to end.\n");
        return;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    // Input from user
    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Print prime numbers in the specified range
    printPrimesInRange(start, end);

    return 0;
}

