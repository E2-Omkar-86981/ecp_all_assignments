//Write a program to display First 5 prime numbers after a given number
#include <stdio.h>

int isArmstrong(int num) {
    int originalNum, remainder, result = 0;

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    // If the result equals the original number, it's an Armstrong number
    return result == num;
}

int main() {
    printf("Armstrong numbers between 1 and 500 are:\n");

    for (int i = 1; i <= 500; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n"); // Newline after printing the numbers
    return 0;
}

