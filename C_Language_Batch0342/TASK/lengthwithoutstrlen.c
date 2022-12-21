#include<stdio.h>
void main()
{
	char name[100];
	int len=0,i;
	
	printf("Enter the name : ");
	gets(name);
	
	for(i=0;name[i];i++){
		len++;
	}
	printf("Length of %s is %d.",name,len);
	
}
