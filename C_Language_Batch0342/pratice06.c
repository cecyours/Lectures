#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Node{
	char data[100]; 
	struct Node *next = NULL; 
}*head; 

void insert(char n[])
{
	struct Node *newNode,*temp; 
	newNode = (struct Node*)malloc(sizeof(struct Node));
	strcpy(newNode->data,n);

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

void search(char n[])
{
	struct Node *temp; 

	int f =0; 
	if(head==NULL)
	{
		printf("There is no data....\n");
		return; 
	}

	temp = head; 

	while(temp!=NULL)
	{
		if(strcpy(temp->next->data,n))
		{
			f =1;
			printf("data found %d\n",n);
		}
		temp = temp->next; 
	}
	if(f==0){
		printf("data not found %d\n",n); 
	}
}


void delete_me(char n[])
{
	int f = 0; 
	struct Node *temp;

	temp = head;
	if(head==NULL)
	{
		printf("no data found ... stack underflow...\n"); 
		return;
	}

	while(temp!=NULL)
	{
		if(strcpy(temp->next->data,n))
		{
			f = 1; 
			printf("im in ..%d,%d\n",n,temp->data);
			temp->next = temp->next->next;
			break;
		}
		temp = temp->next; 
	}

	if(f=0)
	{
		printf("data not found %d ...\n",n);
	}
	else{
		printf("delete ....\n");
	}
}
void display()
{
	struct Node *temp; 

	if(head==NULL)
	{
		printf("THERE IS NO DATA\n");
	}
	else{
		temp = head; 
		while(temp->next!=NULL)
		{
			printf("data %s\n",temp->data);
			temp = temp->next; 
		}
		printf("data %d\n",temp->data);



	}
}
int main()
{
	
	char n[100];
	int choice;

	do{
		printf("\n\npresss 1 for insert : \n");
		printf("presss 2 for delete : \n");
		printf("presss 3 for search : \n");
		printf("presss 4 for display : \n");
		printf("presss 5 for exit  :\n");

		printf("Enter your choice [1-5] : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: 
			printf("Enter the element : ");
			scanf("%s",&n);
			insert(n);
			break;

			case 2: 
			printf("Enter the element to delete: ");
			scanf("%s",&n);
			delete_me(n);
			break;

			case 3: 
			printf("Enter the element to search: ");
			scanf("%s",&n);
			search(n);
			break;

			case 4: 
			printf("\n-----------------\n");
			display();
			break;

			case 5:
			printf("exit ...\n");
			exit(0);
			break;
			
			default:
			printf("Enter the valid value ...\n");
				
		}

	}while(choice<=4);


}	