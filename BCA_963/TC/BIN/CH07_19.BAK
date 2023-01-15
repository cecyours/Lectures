#include<stdio.h>
#include<conio.h>
int n,i;
int sum(int *ptr)
{
    int x=0;

    for(i=0;i<n;i++)
    {
	x = x+(*ptr++);
    }
     return x; // ans = x
}

void main()
{
	int data[100];
	int ans;
    clrscr();
	printf("Enter size of Array : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	       printf(" enter data[ %d ] : ",i);
	       scanf("%d",&data[i]);
	}
	ans = sum(data);
	printf("answer is : %d\n",ans);

    getch();
}