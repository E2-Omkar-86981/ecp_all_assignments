#include<stdio.h>
int main(){
float unit_price=5;
float quantity;
float price;
float discount;
float Dprice;
printf("unit price of item is:%f\n",unit_price);
printf("enter the quantity you want:\n");
scanf("%f",&quantity);
price=quantity*unit_price;
if(quantity>30&& quantity<50){
discount=(price*10)/100;
}
else if (quantity>50){
discount=(price*15)/100;
 
 }
 else{
printf("No discount..\n");
}
 Dprice=price-discount;
 printf("Discount is %f\n",discount);
printf("total price after discount is:%f\n",Dprice);
return 0;
  }
