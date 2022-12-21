#include<stdio.h>
void main()
{
	int rev=0,rem,num,temp;
	
	printf("Enter your number : ");
	scanf("%d",&num);
	
	temp = num; 
	
	while(num>0)
	{
		rem = num%10;
		rev = rev*10+rem; 
		num = num/10; 
	}
	if(temp==rev)
	{
		printf("%d is pallindrom number... : revers no.%d\n",temp,rev);
	}
	else
	{
		printf("%d is not pallindrom number... : revers no.%d\n",temp,rev); 
	}
}
