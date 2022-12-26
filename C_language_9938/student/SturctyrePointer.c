#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
};
int main()
{
	struct Node *n;

	n = (struct Node *)malloc(sizeof(struct Node));

	printf("Enter your number : ");
	scanf("%d",&n->data);

	printf("your number is : %d\n",n->data);
}