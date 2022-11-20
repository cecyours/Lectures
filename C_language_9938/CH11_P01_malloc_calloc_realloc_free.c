
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n,new_size;
	char ch;

	printf("Enter the the size : ");
	scanf("%d",&n);

	/*malloc,calloc : used to assign the size*/
	// ptr = (int *)malloc(n*sizeof(int));
	p = (int *)calloc(n,sizeof(int));

	printf("Enter the array : \n");

	for(i=0;i<n;i++)
	{
		printf("enter the data : ");
		scanf("%d",(p+i));
	}

	/*print*/

	for(i=0;i<n;i++)
	{
		printf("%d is your data\n",*(p+i));
	}
	scanf("%c",&ch);

	printf("do you want to realloc the array [y/n]: ");
	scanf("%c",&ch);

	if(ch=='y' || ch=='Y')
	{
		printf("Enter your extended size : ");
		scanf("%d",&new_size);

		    p= (int *)realloc(p,new_size+n);
			for(;i<new_size+n;i++)
			{
				printf("enter the data : ");
				scanf("%d",(p+i));
			}


			printf("your new array : \n");
			for(i=0;i<n+new_size;i++)
				{
					printf("%d is your data\n",*(p+i));
				}
	}
	free(p);
}