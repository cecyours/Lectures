#include<stdio.h>
void main()
{
	int x=156; 
	
	printf("during post increment :%d\n",x++);//156
	printf("after post increment : %d\n",x);//157
	
	printf("------------------------------------\n");
	
	printf("during pre increment : %d\n",++x);//158
	printf("after pre increment : %d\n",x); //158
	
	
}
