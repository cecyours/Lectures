#include<stdio.h>
int main ()
{
	enum day{MON, TUE=34, WED, THU=7, FRI=9, SAT=10, SUN};

	printf(" MONDAY : %d\n",MON);
	printf(" TUESDAY : %d\n",TUE);
	printf(" WEDNESDAY: %d\n",WED);
	printf(" THURSDAY : %d\n",THU);
	printf(" FRIDAY : %d\n",FRI);
	printf(" SATURDAY : %d\n",SAT);
	printf(" SUNDAY : %d\n",SUN);



}