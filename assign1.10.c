#include<stdio.h>
#include<math.h>

 int main()
 {
 
int a,b,c;
printf("Enter sides of triangle =\n");
scanf("%d%d%d",&a,&b,&c);
int peri=a+b+(c*a)+b+c;

printf("Perimeter of triangle is =%d\n",peri);


 int len;

 len=(a+b+c)/3;
 int area= sqrt(len*(len-1)*(len-2)*(len-3));
 printf("Area of Triangle = %d\n",area);

 }
