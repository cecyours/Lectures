#include<stdio.h>
void main()
{
	int a[10][10][10][10][10];
	int i1,i2,i3,i4,i5;
	int n1,n2,n3,n4,n5;
	int counter=0;
	
	printf("Enter n1-n2-n3-n4-n5: ");
	scanf("%d-%d-%d-%d-%d",&n1,&n2,&n3,&n4,&n5);
	
	for(i1=0;i1<n1;i1++)
	{
		for(i2=0;i2<n2;i2++)
		{
			for(i3=0;i3<n3;i3++)
			{
				for(i4=0;i4<n4;i4++)
				{
					for(i5=0;i5<n5;i5++)
					{
						a[i1][i2][i3][i4][i5] = counter;
						counter++;
					}
				}
			}
		}
	}
	printf("---------------------\n");
	for(i1=0;i1<n1;i1++)
	{
		for(i2=0;i2<n2;i2++)
		{
			for(i3=0;i3<n3;i3++)
			{
				for(i4=0;i4<n4;i4++)
				{
					for(i5=0;i5<n5;i5++)
					{
						printf("\t%3d",a[i1][i2][i3][i4][i5]);
					}
					printf("\n");
				}
				printf("------\n");
			}
		}
	}
}
