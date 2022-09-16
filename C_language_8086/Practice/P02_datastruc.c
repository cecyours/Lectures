
#include<stdio.h>
 
 int main()
{
		int a;
		float c;

		printf("enter int value : ");
		scanf("%d",&a);

		printf("int : %d with size %d bytes..",a,sizeof(a));

		printf("\n---------------------------------\n");

		printf("enter float value : ");
		scanf("%f",&c);

		printf("float : %f with size %d bytes..\n",c,sizeof(c));



}