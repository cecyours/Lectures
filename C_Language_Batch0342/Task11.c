#include<stdio.h>
int main()
{
	int a,b;
	float avg = 0;  

	printf("Enter 2 numbers : "); 
	scanf("%d-%d",&a,&b);

	avg = (float)(a + b) /2;
	printf("Average : %f\n",avg);
}