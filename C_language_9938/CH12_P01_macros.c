
#include "CH12_my.h"
#define A 299

#define SUM(x,y) x+y
int main()
{
	char name[10] = "yash";
	display(name);


	printf("your value is : %d\n",A);

	// #undef A

	#ifdef A
		printf("welcome %d is defined as A\n",A);
	#else
		#error "Hello Error."
		printf("There is not A\n");

	#endif

		printf("your sum : %d\n",SUM(7,3));
}