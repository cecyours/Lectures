
#include<stdio.h>
int main()
{
	enum days  {MON=1,TUE,WED,THU,FRI,SAT,SUN};
	int day;

	printf("Enter day number : ");
	scanf("%d",&day);


	if(day==MON)
		printf("MONDAY....\n");
	else if(day==TUE)
		printf("TUESDAY....\n");
	else if(day==WED)
		printf("WEDNESDAY....\n");
	else if(day==THU)
		printf("THURSDAY....\n");
	else if(day==FRI)
		printf("FRIDAY....\n");
	else if(day==SAT)
		printf("SATURDAY....\n");
	else if(day==SUN)
		printf("SUNDAY....\n");
	else
		printf("invalid...\n");

}