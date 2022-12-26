
#include<stdio.h>
void main()
{
	int a;
	
	printf("Enter a number : ");
	scanf("%d",&a);
	
	if(a<0)
	{
		//		a=a*-1;
		a*=-1;
	}
	
	printf("Number : %d\n",a);
}
