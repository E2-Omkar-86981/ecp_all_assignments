/*Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error mesage.*/
#include<stdio.h>
int main() {
int a,b;
float z;
 
printf("Enter the Value of a :\n");
scanf("%d",&a);
printf("Enter the Value of b :\n");
scanf("%d",&b);
if (b == 0)
 printf("Division by zero\n");
 else {
   z = a / b;
   printf ("%f", z);
 
 return 0;
}
}

