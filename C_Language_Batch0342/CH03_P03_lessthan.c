#include<stdio.h>
void main()
{
int a,b; 
	 
	 printf("enter 2 number : ");
	 scanf("%d,%d",&a,&b); 
	 
	 if(a<b)
	{
		printf("%d is less than %d\n",a,b);
	}
	else
	{
		printf("%d is not less than %d\n",a,b); 
	}
}
