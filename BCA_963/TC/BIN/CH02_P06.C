#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100];
	int i,n,sum=0;
	int *ptr;
clrscr();
	 printf("Enter the size : ");
	 scanf("%d",&n);

	 ptr = &a[0];
	 ptr = a;
	 printf("Enter the data : \n");
	 for(i=0;i<n;i++)
	 {
		printf("Enter a[ %d ] = ",i);
		scanf("%d",(ptr+i));
		sum = sum + *(ptr+i);
	 }

	 printf("\n--------------\n");
	 printf("sum : %d\n",sum);
	 for(i=0;i<n;i++)
	 {
		printf("a[ %d ] = %d\n",i,*(ptr+i));
	 }
getch();
}