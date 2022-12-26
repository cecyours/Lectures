#include<stdio.h>
void main()
{
	int x,i; 
	
	printf("Enter a number : ");
	scanf("%d",&x); 
	

	for(i=1000;i<=2000;i++)
	{
		x = i;
			
			if((x%4==0 || x%400==0) && x%100!=0)
			{
				printf("%d is leap",x);
			}
			
			printf("\n");	
	}

}
