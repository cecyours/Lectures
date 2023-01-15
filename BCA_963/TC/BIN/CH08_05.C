#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100];
	int n,i;
	int *p;
   clrscr();
	// p = &a[0]; #method 1
	p = a; // #method 2: array name reprents address of 1st elements

	printf("Enter size : ");
	scanf("%d",&n);

	printf("Enter elements : \n");
	for(i=0;i<n;i++)
	{
		printf(" a[ %d ] = ",i);
		scanf("%d",&a[i]); // values to array
	}

	printf("\n address stored in pointer : %u\n",p);
	for(i=0;i<n;i++)
	{
	    printf(" a[ %d ]  = %d\n",i,*(p++));
	}
	printf(" address stored in pointer : %u\n",p);
   getch();
}