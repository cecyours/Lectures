#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][1][2][1][3][3];
	int i1,i2,i3,i4,i5,i6;
	int counter = 0;
clrscr();
	 // automatic initialization.
	 for(i1=0; i1<3; i1++)
	 {
		for(i2=0; i2<1; i2++)
		{
			for(i3=0; i3<2; i3++)
			{
				for(i4=0; i4<1; i4++)
				{
					for(i5=0; i5<3; i5++)
					{
						for(i6=0; i6<3; i6++)
						{                               // pre increment
						    a[i1][i2][i3][i4][i5][i6] = ++counter; // auto initialization
						}
					}
				}
			}
		}
	 }
	 ///////////////
	  // display 6-D
	 for(i1=0; i1<3; i1++)
	 {
		for(i2=0; i2<1; i2++)
		{
			for(i3=0; i3<2; i3++)
			{
				for(i4=0; i4<1; i4++)
				{
					for(i5=0; i5<3; i5++)
					{
						for(i6=0; i6<3; i6++)
						{
						    printf(" %2d",a[i1][i2][i3][i4][i5][i6]);
						}
						printf("  ");
					}
					printf("  ");
				}
				printf("\n");
			}
		}
		printf("\n");
	 }
getch();
}