#include <stdio.h>

int main() {
    int i, num;

    for (num = 1; num <= 10; num++) {
        printf("Multiplication table of %d:\n", num);
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("\n");
    }

    return 0;
}
