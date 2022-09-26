#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next = NULL;
}*head;

void insert(int n)
{
	struct Node *newNode,*temp;
	newNode = (struct Node*)malloc(sizeof(struct Node*));
	newNode->data = n;

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
		printf("There is no data \n");
	}
	else{
		temp = head;
		while(temp->next!=NULL)
		{
			printf("Data %d\n",temp->data);
			temp = temp->next;
		}
		printf("data %d\n",temp->data);
	}
}
int main()
{
	insert(12);
	insert(13);
	insert(14);
	insert(15);

	display();
}d