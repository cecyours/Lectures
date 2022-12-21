#include<stdlib.h>
#include<stdio.h>
struct Node{
	int data; 
	struct Node *next = NULL; 

}*head; 

void insert(int n)
{
	struct Node *newNode,*temp; 
	newNode = (struct Node*)malloc(sizeof(struct Node));
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

void search(int n)
{
	struct Node *temp; 

	int f =0; 
	if(head==NULL)
	{
		printf("there is no data...\n");
		return; 
	}

	temp = head;

	while(temp)
 	{
 		if(temp->data==n)
 		{
 			f = 1; 
 			printf("data found %d\n",n); 
 		}
 		temp = temp->next; 
 	}
 	if(f=0){
 		printf("data not found %d\n",n); 
 	}

}


void delete_me(int n)
{
	int f=0; 
	struct Node *temp; 

	temp = head ; 

	if(head==NULL)
	{
		printf("no data found ... stack underflow...\n"); 
		return; 
	}

	while(temp!=NULL)
	{
		if(temp->next->data==n)
		{
			f = 1; 
			printf("im in ..%d,%d\n",n,temp->data); 
			temp->next = temp->next->next; 
		}
		temp = temp->next; 
	}

	if(f=0)
	{
		printf("data not found %d ...\n",n);
	}
	else{
		printf("deleted ....\n");
	}
}
void display()
{
	struct Node *temp; 

	if(head==NULL)
	{
		printf("There is no data \n"); 
	}
	else {
		temp = head;
		while(temp->next!=NULL)
		{
			printf("data %d\n",temp->data); 
			temp = temp->next; 
		}
		printf("data %d\n",temp->data); 



	}
}
int main()
{
	int n; 
	int choice; 

	do{
		printf("\n\npress 1 for insert : \n"); 
		printf("press 2 for delete : \n");
		printf("press 3 for search : \n");
		printf("press 4 for display : \n");
		printf("press 5 for exit : \n");

		printf("Enter your choice [1-5] : "); 
		scanf("%d",&choice); 

		switch(choice)
		{
			case 1: 
			printf("Enter the element : ");
			scanf("%d",&n);
			insert(n);
			break; 

			case 2: 
			printf("Enter the element to delete : ");
			scanf("%d",&n);
			delete_me(n);
			break;

			case 3: 
			printf("Enter the element to search : ");
			scanf("%d",&n);
			search(n);
			break;

			case 4:
			printf("\n----------------------\n"); 	
			display(); 
			break;

			case 5: 
			printf("exit ...\n");
			exit(0);
			break;

			default: 
			printf("Enter the valid value ...\n"); 

		}

	}while(choice<=4)

	
}