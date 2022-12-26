#include<stdio.h>
static int s; 
extern int e2=0;
void main()
{

	auto int a; 
	register int r; 
	
	printf("auto     :  %d\n",a);
	printf("register :  %d\n",r);
	printf("extern   :  %d\n",e2);
	printf("static   :  %d\n",s);	
	
}
