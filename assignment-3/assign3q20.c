#include <stdio.h>

int isPrime(int num) {
    if (num < 2) {
        return 0; // Numbers less than 2 are not prime
    }
    
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Number is divisible by i, so not prime
        }
    }
    return 1; // Prime number
}

int main() {
    int limit;
    
    // Input the upper limit
    printf("Enter the upper limit (between 1 and 100): ");
    scanf("%d", &limit);
    
    if (limit < 1 || limit > 100) {
        printf("Please enter a number between 1 and 100.\n");
        return 1; // Exit if limit is out of range
    }
    
    printf("Prime numbers between 1 and %d are:\n", limit);
    
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n"); // Newline after all primes are printed
    return 0;
}

