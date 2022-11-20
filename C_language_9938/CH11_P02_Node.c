
#include<stdlib.h>
#include<stdio.h>

struct Node{
	int data;

	struct Node *next=NULL;

}*head=NULL;

void insertNode(int n)
{
	struct Node *newNode,*temp;
	newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = n;
	newNode->next = NULL;

	if(head==NULL)
	{
		head = newNode;
	}
	else{

		temp = head;
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void display()
{

	struct Node *temp;

	if(head==NULL)
	{
		printf("there no data..\n");
	}
	else{
		temp = head;

		while(temp)
		{
			printf("%d\n",temp->data);
			temp = temp->next;
		}
	}
}
/*node1 -> node2 -> node3 ->node4*/
int main()
{
	insertNode(34);
	insertNode(54);
	insertNode(65);
	insertNode(33);

	display();
}