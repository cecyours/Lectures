
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);

	if(num%7==0 && num%3==0)
		printf("luck %d\n",num );
	else
		printf("! luck %d\n",num );

}