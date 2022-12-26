#include<stdio.h>
#include<stdlib.h>
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

void c