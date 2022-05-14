#include<stdio.h>
void main ()
{
	float P,R,N,SI;
	printf("Enter P,R,N ");
	scanf("%f,%f,%f",&P,&R,&N);
	
	SI = P*R*N/100; 
	
	printf("SI : %f",SI);
	
	
}
