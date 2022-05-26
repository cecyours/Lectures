#include<stdio.h>
void main()
{
	int x=456; 
	
	printf("during post decrement : %d\n",x--);//456
	printf("after post decrement : %d\n",x); //455
	
	printf("--------------------------------\n");
	
	printf("during pre decrement : %d\n",--x); //454
	printf("after per decrement : %d\n",x);//454
}
