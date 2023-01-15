#include<stdio.h>
#include<conio.h>
int n,i; // global variables
int min(int arr[])
{
  int x = arr[0];
  for(i=0;i<n;i++)
  {
	if(x>arr[i])
	{
	   x = arr[i];
	}
  }
   return x; // minimum = x
}
void main()
{
	int data[100];
	int minimum;
   clrscr();
	printf("Enter size of Array : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	       printf(" enter data[ %d ] : ",i);
	       scanf("%d",&data[i]);
	}
	minimum = min(data);
	printf("minimum is : %d\n",minimum);
   getch();
}