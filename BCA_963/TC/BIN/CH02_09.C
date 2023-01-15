#include<stdio.h>
#include<conio.h>
int main()
{
	enum day{MON=1, TUE, WED, THU=101, FRI, SAT, SUN};
	/*
		MON = 1 so TUE = 2, WED = 3
		THU = 101 so FRI = 102, SAT = 103, SUN = 104
	NOTE: if we don't assign values then these constant will assign by 0, 1, 2, so on.
	*/
clrscr();
	// lets display
	printf("   MONDAY : %d\n",MON); // MON = 1 , manually
	printf("  TUESDAY : %d\n",TUE); // TUE = MON+1 so TUE = 2
	printf("WEDNESDAY : %d\n",WED); // WED = TUE+1 so WED = 3

	printf(" THURSDAY : %d\n",THU); // THU = 101 , manually
	printf("   FRIDAY : %d\n",FRI); // FRI = THU+1 so FRI = 102
	printf(" SATURDAY : %d\n",SAT); // SAT = FRI+1 so SAT = 103
	printf("   SUNDAY : %d\n",SUN); // SUN = SAT+1 so SUN = 104
getch();
return 0;
}