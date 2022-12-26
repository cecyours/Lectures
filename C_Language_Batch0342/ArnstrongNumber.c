#include<stdio.h>
void main()
{
	int digits=0,rem,arm=0,temp,num;
	
	printf("Enter a number : "); 
	scanf("%d",&num);
	
	temp=num; 
	while(num>0)
	{
		digits++; 
		num/=10;
	}
	num=temp;
	while(num>0)
	{
		rem = num%10;
		arm = arm+pow(rem,digits); 
		num = num/10;
	}
	if(arm==temp)
	{
		printf("Number is arm : %d \t : %d\n",temp,arm);
	}
	else
	{
		printf("Number is not arm : %d \t : %d\n",temp,arm);
	}
}
