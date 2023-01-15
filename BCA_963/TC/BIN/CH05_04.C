#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],min,max,i,n;
clrscr();
	printf("Enter the size : ");
	scanf("%d",&n);

	printf("\nEnter the array : \n");
	for(i=0; i<n; i++)
	{
		printf("Enter a[ %d ] = ",i);
		scanf("%d",&a[i]);
	}

	min=max=a[0];
	// to find min/max , we will compare first element to other element
	for(i=0;i<n;i++)
	{
	    if(a[i] < min)
	    {   // if a[i] is less than min, then update min with a[i]
		min = a[i];
	    }
	    if(a[i] > max)
	    {  // if a[i] is greater than max,then update max with a[i]
		max = a[i];
	    }
	}

	printf("minimum number : %d\n",min);
	printf("maximum number : %d\n",max);
getch();
}