#include<stdio.h>
struct Node{
	int x;
};
void display(struct Node n1,struct Node n2)
{
	struct Node n3; 

	n3.x = n1.x + n2.x;

	printf("%d + %d = %d\n",n1.x,n2.x,n3.x);

}
int main()
{
	struct Node n1,n2;

	printf("Enter a number : ");
	scanf("%d",&n1.x);

	printf("Enter the number : ");
	scanf("%d",&n2.x);

	display(n1,n2);
		return 0;
}