
// meri marji...

#include<stdio.h> // link section

#define A 100 // Definition
int a = 200; // global definition section
 
void sum()  //user-define section 
{
	printf("%d + %d = %d\n",a,A,a+A);
}

int main() //main section..
{
		sum();
		sum();
}


