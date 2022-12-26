#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{

	char name[100];
	struct Node *next = NULL;
}*head = NULL;


void insert(char name[])
{
	struct Node *newNode,*temp;

	newNode = (struct Node *)malloc(sizeof(struct Node *));

	strcpy(newNode->name,name);

	if(head==NULL)
	{
		head = newNode;
		return;
	}
	temp = head;

	while(temp->next!=NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;

	printf("node creaded ...\n");
}
void display()
{
	struct Node *temp;

	if(head==NULL)
	{
		printf("No Data ,,\n");
		return;
	}

	temp = head;

	while(temp)
	{
		printf("%s\n", temp->name);
		temp = temp->next;
	}
}
int main()
{
	char n[] = "Avi";
	insert(n);
	insert(n);
	insert(n);
	insert(n);
	insert(n);

	display();
}