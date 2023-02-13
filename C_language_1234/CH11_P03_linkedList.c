
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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


void search(int num)
{
    struct Node *temp;
    bool f = true;
    if(head==NULL)
    {
        printf("No data is available..\n");
        return;
    }

    temp = head;

   
    while(temp)
    {
        if(temp->data==num)
        {
            f = false;
            printf("%d found...\n",num);
        }

        temp = temp->next;
    }

    if(f)
    {
        printf("%d is not found...\n",num);
    }
}

void delete_(int num)
{
    struct Node *temp;

    if(head==NULL)
    {
        printf("No data to delete...\n");
        return;
    }

    temp = head;

         if(head->data==num)
        {
            head = head->next;
            return;
        }
    while(temp)
    {

        if(temp->next->data==num)
        {
            temp->next = temp->next->next; 
            break;
        }

        temp = temp->next;
    }

    printf("deleted done..\n");
}
int main()
{

    insert(10);
    insert(20);
    insert(30);
    insert(40);

    search(50);
    delete_(10);

    display();
}