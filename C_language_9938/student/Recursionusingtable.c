
#include<stdio.h>


void multiply_tab(int num,int i)
{

	printf("\n");
	printf("%d X %d = %d",num,i,(num*i));

	if(i<10)
		return multiply_tab(num,i+1);
}
int main()
{

	int num,i = 0;

	printf("Enter a number to generate the table :\n");
	scanf("%d",&num);

	printf("Table of %d",num);
	multiply_tab(num,1);

}