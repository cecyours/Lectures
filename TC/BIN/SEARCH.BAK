#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100];
	int i,n,data,f=0;
clrscr();
	printf("Enter size(n) : ");
	scanf("%d",&n);
	printf("Enter the data : \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter data to find : ");
	scanf("%d",&data);
	for(i=0;i<n;i++)
	{
		if(a[i]==data)
		{      f=1;
			printf("Data found : %d at position %d\n",data,i);
		}
	}
	 if(f==0)
		printf("Data(%d) not found ",data);
getch();
}