#include<stdio.h>
	int extern e=10; //global
	int static s; //global/local
int main()
{

	int auto a; //local
	int register r;//local


	printf("    auto : %d\n",a);
	printf("register : %d\n",r);
	printf("  extern : %d\n",e);
	printf("  static : %d\n",s);

}