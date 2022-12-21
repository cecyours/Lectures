#include<stdio.h>
void main()
{
	char str[100],find[100];
	int f = 0;
	int i,j,k;
	
	printf("Enter the main String : ");
	gets(str);
	
	printf("Enter the sub String : ");
	gets(find);
	
	for(i=0;str[i];i++)
	{
		k = i;
		f = 1;
		for(j=0;find[j];j++,k++)
		{
			
			if(str[k]!=find[j])
			{
		
				f = 0;
				break;
			}
				
		}
		if(f==1) 		{
		break;
		}
	}
	if(f==1)
	{
		printf("find done");
	}
	else{
		printf("find not done..");
	}
}
