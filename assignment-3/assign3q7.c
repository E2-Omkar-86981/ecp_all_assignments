#include <stdio.h>

int main() {
    int number;
    
    
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Output:\n");

    
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) { 
            int j = number / i;
            
            printf("%d * %d = %d\n", i, j, number);
        }
    }

    return 0;
}

