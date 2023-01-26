#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Items{
  int item_code;
  char item_name[100];
  int item_price;
};

void input(struct Items items[],int n)
{
	int i;
	printf("Enter information about %d items \n",n);

	for(i=0;i<n;i++)
	{
		printf("Enter details for %d item : \n",i+1);

		printf("Item code : ");
		scanf("%d",&items[i].item_code);

		flushall();
		printf("Item Name : ");
		gets(items[i].item_name);

		printf("Item price : ");
		scanf("%d",&items[i].item_price);
	}
}

void output(struct Items items[],int n)
{
   int i;
   int new_price;

   for(i=0;i<n;i++)
   {
	new_price = items[i].item_price*0.10+items[i].item_price;
	printf("%d\t %s\t %d\n",items[i].item_code,items[i].item_name,new_price);
   }
}
void main()
{
	int n;
	struct Items items[100];
clrscr();
	printf("Enter the size : ");
	scanf("%d",&n);

	input(items,n);// function calling :)
	output(items,n); // function calling.
getch();
}