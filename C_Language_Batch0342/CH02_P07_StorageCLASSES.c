#include<stdio.h>
extern int e=0;
static int s;
void main()
{
	auto int a;
	register int r;

	
	printf("    auto : %d\n",a);
	printf("register : %d\n",r);
	printf(" extern  : %d\n",e);
	printf("  static : %d\n",s);
}
