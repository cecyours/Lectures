#include<stdio.h>

int main()
{
	int a,b,c;
	char ch;

	while(1)
	{
		printf("Input Two Integers : \n");
		scanf("%d%d",&a,&b);

		c = a + b;


		printf("(%d) + (%d) = (%d)\n",a,b,c);

		printf("Do You Wish To Add More Number (y/n)\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		
		if (ch == 'y' || ch == 'Y')
			continue;
		else
			break;
	}
}