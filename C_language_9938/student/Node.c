#include<stdio.h>
#include<stdlib.h>

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
		printf("There no data...\n");
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

void search(int n)
{

	struct Node *temp;
	int f=0;
	if(head==NULL)
	{
		printf("There is no data.\n");
	}
	else{

		temp = head;

		while(temp)
		{

			if(temp->data == n)
			{
				printf("Data Found : %d\n",n);
				f = 1;
				break;
			}
			temp = temp->next;
		}

		if (f==0)
		{
			printf("Data not found.\n");
		}

	}
}


void delete_(int n)
{

	struct Node *temp;

	if (head==NULL)
	{
		printf("There is no data....\n");
	}
	else
	{

		if (head->data==n)
		{
			head=head->next;
		}
		temp = head;


		while(temp->next)
		{

			if (temp->next->data==n)
			{

				temp->next = temp->next->next;
				continue;
			}
			temp = temp->next;
		}
	}
}

int main()
{

	insertNode(1);
	insertNode(2);
	insertNode(3);
	insertNode(4);
	insertNode(5);
	insertNode(6);
	insertNode(7);
	insertNode(8);
	insertNode(9);
	insertNode(10);
	insertNode(11);
	insertNode(12);
	insertNode(13);
	insertNode(14);
	insertNode(15);



	display();

	search(13);
	delete_(13);
	display();
}