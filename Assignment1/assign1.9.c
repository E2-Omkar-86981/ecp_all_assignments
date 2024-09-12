1 #include<stdio.h>
  2 
  3 
  4 void main()
  5 {
  6  float celsius, fahrenheit;
  7 
  8 
  9  printf("\n Enter Temp in Fahrenheit : ");
 10  scanf("%f", &fahrenheit);
 11 
 12  celsius = (fahrenheit-32) / 1.8;
 13  printf("\n Temperature in Celsius : %.2f ", celsius);
 14 
 15 return 0;
 16 
 17 }
~      
