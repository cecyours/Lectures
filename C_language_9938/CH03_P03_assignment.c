
#include<stdio.h>
int main()
{

	int a=10,b=2;

	a+=b; //a = a+b
	printf("value of a after += : %d\n",a);  //12

	a-=b; // a= a-b;
	printf("value of a after -= : %d\n",a); //10

	a*=b; //a=a*b
	printf("value of a after *= : %d\n",a);

	a/=b; //a=a/b
	printf("value of a after /= : %d\n",a);

	a%=b; //a=a%b
	printf("value of a after %%= : %d\n",a);

}