#include<stdio.h>

void display()
{
	printf("Hello world\n");
//	return;
exit(0);
	
	printf("Bye bye..\n");
}
void main()
{
	int i;
	
	for(i=1;i<=10;i++)
	{
		
		if(i%2==0)
		{
		break;
			continue;
		}
		printf("Hello World : %d\n",i);
			
	}
	
		display();//call
		
		printf("-+++++_=0--====");
}
