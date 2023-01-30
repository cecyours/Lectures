#include<stdio.h>
#include<conio.h>
void main()
{
	enum day {mon,tue,wed,thu,fri,sat,sun,month,feb,march};

clrscr();
	printf("  Monday   : %d\n" ,mon);
	printf("  Tuesday  : %d\n" ,tue);
	printf("  wednesday: %d\n" ,wed);
	printf("  tuesday  : %d\n" ,thu);
	printf("  friday   : %d\n" ,fri);
	printf("  saturday : %d\n" ,sat);
	printf("  sunday   : %d\n" ,sun);
	printf("  may      : %d\n",month);
	printf("  february : %d\n",feb);
	printf("  march    : %d\n",march);

getch();
}