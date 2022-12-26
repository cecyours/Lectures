#include<stdio.h>
#include<string.h>
// #include<conio.h>
/*
12th

IT 
DIPLOMA 3y / ENG. 4y
----------------
SKILL -> company ROLE -> Improvement -> market
----------------
Fighter Student -> pay -> Pay
-----------
Practice -> lanaguegs
java, php, 

-------------
Dev x google

20 y after -> AI
*/

int main()
{
	char str[100],chTemp,ch1,ch2;
	int i,j,len;
	printf("Enter any string :");

	// gets(str);
	scanf("%s",str);

	len = strlen(str);
	for(i=0;i<len;i++)
	{ 


			for(j=i+1;j<len;j++)
			{
				ch1  = str[i];
				ch2  = str[j];
	 				
					if(str[i]>='a' && str[i]<='z')
					{
						ch1-=32;
					}
					if(str[j]>='a' && str[j]<='z')
					{
						ch2-=32;
					}


	 				if(ch1>ch2)
	 				{
	 					chTemp = str[i];
						str[i] = str[j];
						str[j] = chTemp;
	 				}



		 
			}
		
	}

	printf("\n Same string with each word in ascending order : \n%s",str);
	// getch();

}