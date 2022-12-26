#include"Frist.h"
#define A 299

#define SUM(x,y) x+y

int main()
{

	char name[10] = "YASH";
	display(name);

	printf("Your value is : %d\n",A);

	#ifdef A
		printf("Wellcome %d is defined as A\n",A);
	#else
		#error"bye."
		printf("There is not A\n");
	#endif

		printf("your sum : %d\n",SUM(89,11));
}