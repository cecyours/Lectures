#include<stdio.h>
void main()
{
	int year; 
	
	for(year=1000;year<5000;year++)
	{
	if((year%2==0 || year%400==0) && (year!=100))
		{
			printf(" %d \n ",year);	
		}
		}	
	
}
