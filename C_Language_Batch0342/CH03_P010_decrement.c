#include<stdio.h>
void main()
{
	int x=15;
	
	printf("during post decrement : %d\n",x--);//15
	printf(" after post decrement : %d\n",x);//14
	
	printf("---------------\n");
	
	
	printf("during pre decrement : %d\n",--x);// 13
	printf(" after pre decrement : %d\n",x); // 13
	
}
