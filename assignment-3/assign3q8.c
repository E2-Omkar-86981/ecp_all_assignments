#include <stdio.h>

int main() {
    int num, i;

    // Accept a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);

    // Print the number of 2s that divide num
    while (num % 2 == 0) {
        printf("2 ");
        num /= 2;
    }

    // Print all odd factors from 3 onwards
    for (i = 3; i <= num; i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    printf("\n");

    return 0;
}

