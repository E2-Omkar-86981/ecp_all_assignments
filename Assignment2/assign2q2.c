#include<stdio.h>
int main() {
    int a;
    printf("Enter the Number : ");
    scanf("%d", &a);

    // true if num is perfectly divisible by 2
    if(a % 2 == 0){
        printf("%d is even \n", a);
    
    }

    else
    {
        printf("%d is odd \n", a);
    }
    return 0;
}
