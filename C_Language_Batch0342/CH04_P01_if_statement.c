#include <stdio.h>
#include <stdlib.h>
void main()
{
	int x;
	printf("Enter a number  : ");
	scanf("%d",&x);

	if(x>100 || x<0)
	{
		printf("invalid number \a\n");
		exit(0);
	}
	printf("Hello there...\n");
}