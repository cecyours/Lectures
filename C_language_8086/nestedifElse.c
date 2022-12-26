#include<stdio.h>
int main()
{
 	int a,b,c;
 	printf("Enter 3 numbers : " );
 	scanf("%d,%d,%d",&a,&b,&c);

 	if(a==b && b==c)
 	{
 		printf("all r same.\n");

 	}
 	else
 	{

	 	if(a>b)
	 	{
	 		if(a>c)
	 		{
	 			printf("a is max : %d\n",a);
	 		}
	 		else 
	 		{
	 			printf("c is max : %d\n",c);
	 		}

	 	}
	 	else
	 	{
	 		if (b>c)
	 		{
	 			printf("b is max : %d\n",b);
	 		}
	 		else
	 		{
	 			printf("c is max :: %d\n",c );
	 		}
	 	}

 	}
}