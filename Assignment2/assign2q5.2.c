// C program to find largest among three 
// numbers using ternary operator

#include <stdio.h>

int main()
{
	// variable declaration
	int n1 , n2 , n3 , max;
	printf("Enter three nos: ");

	scanf("%d%d%d",&n1,&n2,&n3);
	
	// Largest among n1, n2 and n3
	max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
	
	// Print the largest number
	printf("Largest number among %d, %d and %d is %d.",
										n1, n2, n3, max);

	return 0;
}

