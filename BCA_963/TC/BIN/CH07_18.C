#include<stdio.h>
#include<conio.h>
int n,i; // global variables
int max(int arr[2]) // no matter what size is here
{
  int x = arr[0];
  for(i=0;i<n;i++)
  {
	if(x<arr[i])
	{
	   x = arr[i];
	}
  }
   return x; // maximum = x
}
void main()
{
	int data[100];
	int maximum;
   clrscr();
	printf("Enter size of Array : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	       printf(" enter data[ %d ] : ",i);
	       scanf("%d",&data[i]);
	}
	maximum = max(data);
	printf("maximum is : %d\n",maximum);
   getch();
}