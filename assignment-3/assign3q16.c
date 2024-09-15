#include<stdio.h>
#include<stdlib.h>
int main()
{
int m,num;
for(int i=1;i<=10;i++)
{
printf("Enter the number:");
scanf("%d",&num);

m=rand();
if(m==num)
{
printf("congrts! you won\n");
}
else if(m<num)
{
printf("**left**\n");
}
else if(m>num)
{
printf("**right**\n");
}}
return 0;
}


