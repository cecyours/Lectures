#include<stdio.h>
void LowerToUpper(char s[])
{
	int i; 
	for(i=0;s[i];i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i] = s[i]-32; 
		}
	}
}
int main()
{
	char str[100];

	printf("Enter the string : ");
	scanf("%s",str);

	LowerToUpper(str); 

	printf("New string %s\n",str);
}