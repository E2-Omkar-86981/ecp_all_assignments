#include<stdio.h>

int main()
{
	int id,dno;
	char dc;
	
	printf("Enter employee id : ");
	scanf("%d",&id);
			
	printf("Enter department no. : ");	
	scanf("%d",&dno);

	printf("Enter employee code : ");
	scanf("%*c%c",&dc);

	printf("Employee with id %d is ",id);
	

	switch(dno){
		case 10 :printf("in Marketing department ");
			 break;
	
		case 20 :printf("in Management department ");
			 break;
	
		case 30 :printf("in Sales department ");
			 break;
	
		case 40 :printf("in Designing department ");
			 break;
		
		default :printf("Invalid input ");
			 break;
	}


	switch(dc){
		case 'M' :printf("as Manager ");
			 break;
	
		case 'S' :printf("as Supervisor ");
			 break;
	
		case 's' :printf("Security Officer ");
			 break;
	
		case 'C' :printf("Clerk ");
			 break;
		
		default :printf("Invalid input ");
			 break;
	}
}
