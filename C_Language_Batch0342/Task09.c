#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp = *a; 
	*a = *b; 
	*b = temp; 

	printf("ph0 x : %d\t y : %d\n",*a,*b);

}
int main()
{
	int x,y; 
	printf("Enter 2 number : ");
	scanf("%d-%d",&x,&y);

	swap(&x,&y);

	printf("ph1 x : %d\t y : %d\n",x,y);
}