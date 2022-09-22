
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

void search(char name[])
{
	int f = 0;
	struct Node *temp;

	if(head==NULL)
	{
		printf("no data to search...\n");
		return;
	}

	temp = head;

	while(temp)
	{
		if(strcmp(temp->name,name)==0)
		{
			f =1;
			printf("data mil gya ..\n");
			break;
		}
		temp = temp->next;
	}

	if(!f)	
	{
		printf("no data found...\n");
	}
}

void delete_(char name[])
{
int f = 0;
	struct Node *temp;

	if(head==NULL)
	{
		printf("no data to search...\n");
		return;
	}

	temp = head;

	while(temp)
	{
		if(strcmp(temp->next->name,name)==0)
		{
			 
			 temp->next = temp->next->next;
			 printf("data deleted....\n");
			break;
		}
		temp = temp->next;
	}


}
void display()
{
	struct Node *temp;

	if(head==NULL)
	{
		printf("no data ,,\n");
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
	char n1[] = "Gk 1";
	char n2[] = "Gk 2";
	char n3[] = "Gk 3";
	char n4[] = "Gk 4";
	char n5[] = "Gk 5";
	insert(n1);
	insert(n2);
	insert(n3);
	insert(n4);
	insert(n5);

	search(n1);
	delete_(n3);
	display();
}