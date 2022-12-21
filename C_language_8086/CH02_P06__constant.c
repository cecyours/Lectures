#include<stdio.h>
#define A 45 
int main()
{
	#undef A
	#define A 80

	 int const a = 30;
	 A = 80;
	  a = 30
 printf("value %d\n",A );
 printf("value %d\n",a );
}