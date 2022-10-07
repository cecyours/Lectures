#include<stdio.h>
int main()
{
	float P,R,N,SI;

	printf("Enter the P,R,N : \n");
	scanf("%f,%f,%f",&P;&R;&N);

	SI = P*R*N/100;

	printf("%f * %f * %f\n",P,R,N);

	printf("%f",SI);
}