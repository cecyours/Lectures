
/*++x : pre*/
/*x++ : post*/

#include<stdio.h>
int main()
{
	int x =10;

	printf("during post increment : %d\n",x++); //10 //10
	printf(" after post increment : %d\n",x); // 11 //9


	printf(" during pre increment : %d\n",++x); //12 // 8
	printf("  after pre increment : %d\n",x);//12 //8


	printf("-------------------------------\n");

}