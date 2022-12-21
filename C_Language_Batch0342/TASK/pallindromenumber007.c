#include<stdio.h>
void main()
{
	int rev=0,rem,num,temp; 
	
	printf("Enter your number : ");
	scanf("%d",&num);
	
	temp=num;
	while(num>0)
	{
		rem = num%10;
		rev = rev*10+rem; 
		num = num/10;
	}
	if(temp==rev)
	{
		printf("is pallindromenumber %d\n",temp,rev);
	}
	else
	{
		printf("is not pallindromenumber %d\n",temp,rev);
	}
}
