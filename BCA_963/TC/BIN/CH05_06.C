#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100];
	int n,temp;
	int i,j;
clrscr();
       printf("Enter the size : ");
       scanf("%d",&n);

       printf("Enter the array :\n");
       for(i=0;i<n;i++)
       {
	   printf("Enter a[ %d ] = ",i);
	   scanf("%d",&a[i]);
       }
       //----- to sort the array
	    for(i=0;i<n;i++)
	    {
		for(j=i+1; j<n; j++)
		{
		     if(a[i]>a[j])
		     {  //swap
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		     }
		}
	    }
       //-----
	printf("\nsorted array : \n");
	for(i=0;i<n;i++)
	{
		printf("a[ %d ] = %d\n",i,a[i]);
	}
getch();
}