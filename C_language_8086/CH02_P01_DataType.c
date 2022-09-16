
#include<stdio.h>

int main()
{ 
	int x; // number without points
	float f; // numbers with points

	printf("Enter int value : ");
	scanf("%d",&x);

	printf("int : %d with size %d bytes..",x,sizeof(x));

	printf("\n-----------------------------\n");

	printf("Enter float value : ");
	scanf("%f",&f);

	printf("float : %f with size %d bytes..\n",f,sizeof(f));
}