#include <stdio.h>
int main() {
// Addition,subtraction,product
    int a, b, sum,diff,prod;

    printf("Enter two nos: ");
    scanf("%d %d", &a, &b);

    
    sum = a + b;
    diff=a-b;
    prod=a*b;

    printf("sum is %d + %d = %d\n", a, b, sum);
    printf("diff is %d - %d = %d\n", a, b, diff);
    printf("product is %d * %d = %d\n", a, b, prod);

    return 0;
}
