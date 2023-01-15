#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[100],str2[100],*pos=0;
	int i,j,len,f=0;
clrscr();
	printf("Enter main String : ");
	gets(str1);

	printf("Enter sub String : ");
	gets(str2);
	for(len=0;str2[len];len++);

	for(i=0;str1[i];i++,j++)
	{
		if(j==len-1)
		{
		      f=1;
		      break;
		}
		if(str1[i]!=str2[j])
		{
			j=-1;
		}


	}
	if(f)
	{
		printf("%s is found.\n",str2);
	}
	else
	{
		printf("%s is not found..\n",str2);
	}
getch();
}