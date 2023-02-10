
#include<stdio.h>
#include<stdlib.h>
struct Node{

    int data;
    struct Node *next;

}*head = NULL;


void insert(int num)
{
    struct Node *newNode,*temp;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = num;
    newNode->next = NULL;

    if(head==NULL)
    {
        head = newNode;
        
    }
    else
    {
        temp = head;

        while(temp->next!=NULL)
        {
            temp = temp->next;
        }

        //TODO insert the node
        temp->next = newNode;
    }

    printf("data inserted...\n");
}

void display()
{
    struct Node *temp;

    if(head==NULL)
    {
        printf("Stack underflow. No data here...");
        return;
    }

    temp = head;

    while(temp)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    

}

int main()
{

    insert(10);
    insert(20);
    insert(30);
    insert(40);

    display();
}