#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
clrscr();
	printf("Enter the number : ");
	scanf("%d",&n);

	for(i=0;i<n;i++) // for rows, outer loop
	{
		for(j=0;j<n;j++) //for columns, inner loop
		{
			printf(" * ");
		}
		printf("\n"); // new line after all columns filled.
	}
getch();
}