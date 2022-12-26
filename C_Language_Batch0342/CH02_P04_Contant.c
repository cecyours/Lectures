
#include<stdio.h>

#define A 100

void main()
{
	
	const int a = 10;
	
	// ----- weak way
	printf("Value A : %d\n",A);
	
	#undef A
	#define A 200
	printf("Value A : %d\n",A);

	// -------- strong way
	
	printf("Value a : %d\n",a);
//	a = 30;
	printf("Value a : %d\n",a);
	
}
