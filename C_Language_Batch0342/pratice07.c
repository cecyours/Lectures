#include<stdio.h>
void main()
{
	int i; 
	int start,end; 
	
	printf("Enter start->end : "); 
	scanf("%d,%d",&start,&end);
	
	for(i=start;;i++)
	{
		if(i%3==0)
		printf("%d\n",i);
	}
}
