#include<stdio.h>
#include<conio.h>
void main()
{
	char text[] = "programming"; // string
	int num = 30;
	double data = 346.2351;
clrscr();
	printf("text : %s\n\n",text); // %s for string.

	printf("    	       num : %d\n",num); // %d for decimal
	printf("      num in octal : %o\n",num); // %o for octal
	printf("num is hexadecimal : %X\n\n",num); // %X for hexa-decimal

	printf("data with %%lf : %lf\n",data); // data without scientific notation
	printf(" data with %%e : %e\n",data); // data with scientific notation
getch();
}