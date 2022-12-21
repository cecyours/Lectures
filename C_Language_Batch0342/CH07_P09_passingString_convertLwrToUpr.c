#include<stdio.h>

void lowerToUpper(char s[])
{
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i]  = s[i]-32;
		}
	}
}

int main()
{
	char str[100];

	printf("Enter the String : ");
	scanf("%s",str);

	lowerToUpper(str);

	printf("new string %s\n",str);

}