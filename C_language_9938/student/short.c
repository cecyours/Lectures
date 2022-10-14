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
	char str[100],chTemp,ch;
	int i,j,len;
	printf("Enter any string :");

	// gets(str);
	scanf("%s",str);

	len = strlen(str);
	for(i=0;i<len;i++)
	{ 


			for(j=i+1;j<len;j++)
			{
				ch  = str[i];
	 				
	 				if(str[i]>str[j])
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