
// #include<stdio.h>
// #define A 40 //WEAK METHOD
// int main()
// {

// 	#undef A //clear
// 	#define A 48 //reset with new value

// 	int const a = 28;

// 	// A = 48;
// 		// a = 20
// 	printf("value %d\n",A);
// 	printf("value %d\n",a);
// }
#include<stdio.h>
#define A 45 
int main()
{
	#undef A
	#define A 80

	 int const a = 30;
	 // A = 80;
	  // a = 30;
 printf("value %d\n",A );
 printf("value %d\n",a );
}