

#include<stdio.h>
int main()
{
	FILE *fp; 

	char ch[100];

	fp  = fopen("Avi.txt","r");

	printf("%s sdds \n",ch);
	while((fscanf (fp,"%s",ch))!=EOF)
	{
		printf("%s ",ch); 
	}
}