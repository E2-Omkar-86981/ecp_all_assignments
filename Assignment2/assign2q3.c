#include<stdio.h>

int main()
{
 int n;
 

 printf("\n Enter Any Number : ");
 scanf("%d",&n);

 if(n>=0)
 {
  if(n==0)
   {
    printf("\n Number is Zero ");
   }
   else
   {
    printf("\n %d is Positive ",n);
   }
 }
 else
 {
  printf("\n %d is Negative ",n);
 }

 return 0;
}
