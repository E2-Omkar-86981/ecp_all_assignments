#include <stdio.h>

void swapUsingXOR(int *a, int *b) {
    if (a != b) {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swapUsingXOR(&x, &y);

    printf("After swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}

