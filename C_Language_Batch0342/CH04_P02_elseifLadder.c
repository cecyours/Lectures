
#include <stdio.h>
void main()
{
	int day;

	printf("Enter a day numeber : ");
	scanf("%d",&day);

	if(day==1)
	{
		printf("Monday\n");
	}
	else if(day==2)
	{
		printf("Tueday\n");
	}
	else if(day==3)
	{
		printf("Wednesday\n");
	}	
	else if(day==4)
	{
		printf("Thusday\n");
	}
	else if(day==5)
	{
		printf("friday\n");
	}
	else if(day==6)
	{
		printf("saturday\n");
	}
	else if(day==7)
	{
		printf("sunday\n");
	}
	else{
		printf("invaid day number.\n");
	}
}