#include<stdio.h>

int main()
{
 int num;
 printf("Enter 4 digit no.= ");      
 scanf("%d",&num);

int n1= num/100;
int n2=num%100;
int n3,n4,n5,n6;

n3=n1/10;
n4=n1%10;
n5=n2/10;
n6=n2%10;

printf("Face value of num is\n %d  %d  %d  %d\n\n",n3,n4,n5,n6);      //a

printf("Place value of each decimal is\n%d= %d+%d+%d+%d\n",num,n3*1000,n4*100,n5*10,n6);      //b

int num1;
printf("Number in reverse form is %d",num1=n6*1000+n5*100+n4*10+n3);



}
