#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,data;
	int f = 0; //set default to false
clrscr();
	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
	  printf("Enter a[ %d ] =",i);
	  scanf("%d",&a[i]);
	}
	printf("Enter the data to search : ");
	scanf("%d",&data);

	for(i=0;i<n;i++)
	{
	       if(data == a[i])
	       {
		  printf("%d found at %d index.\n",data,i);
		  f = 1; //set flag to true
	       }
	}

	if(!f)// if flag is still false.
	{
		printf("sorry, %d not found in given array.",data);
	}
getch();
}