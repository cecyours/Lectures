#include<stdio.h>
int mul(int a,int b)
{
	return a*b; 
}
int div(int a,int b)
{
	return a/b; 
}
void main()
{
	int x,y,z; 

	printf("Enter your number : ");
	scanf("%d-%d",&x,&y);

	z=mul(x,y);
	printf("%d x %d = %d\n",x,y,z);

	z=div(x,y);
	printf("%d / %d = %d\n",x,y,z);
}