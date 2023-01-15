#include<stdio.h>
#include<conio.h>
void main()
{
   int a[100];
   int i,n;
   int *p;
   clrscr();
	p = &a[0]; //method 2
	printf("Enter size : ");
	scanf("%d",&n);

	printf("Enter elements : \n");
	for(i=0;i<n;i++)
	{
		printf("a [ %d ] = ",i);
		scanf("%d",&a[i]); // value to array
	}
	printf("\n address stored in pointer : %u\n",p);
	for(i=0;i<n;i++)
	{
		printf(" a[ %d ] = %d\n",i,*(p+i));
	}
	printf("\n address stored in pointer : %u\n",p);

   getch();
}