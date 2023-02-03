//sort or compare
#include<stdio.h>
#include<conio.h>

struct Person{
	char name[100];
	int iq;
	int id;
};

void main()
{
	struct Person p[100],tmp_person;
	int n,i,j;
clrscr();
	  printf("Enter number of persons : ");
	  scanf("%d",&n);

	  textattr(13);
	  cprintf("Enter data :\n\r");

	  for(i=0;i<n;i++)
	  {
		textattr(4);
		cprintf("Enter details of Person : %d\n\t",i+1);
		cprintf("name : ");
		flushall();
		gets(p[i].name);

		cprintf("id : ");
		scanf("%d",&p[i].id);

		cprintf("iq : ");
		scanf("%d",&p[i].iq);
	  }

	  // before sort
	  textattr(2);
	  cprintf("Before sort:\n\r");
	  for(i=0;i<n;i++)
	  {
		printf("%s\t %d\t %d\n",p[i].name,p[i].id,p[i].iq);

	  }
	  // sort
	  for(i=0;i<n;i++)
	  {
		for(j=i+1;j<n;j++)
		{
			if(p[i].iq<p[j].iq)
			{
			      tmp_person = p[i];
			      p[i] = p[j];
			      p[j] = tmp_person;
			}
		}
	  }
	  textattr(2);
	  cprintf("after sort:\n\r");
	  for(i=0;i<n;i++)
	  {
		printf("%s\t %d\t %d\n",p[i].name,p[i].id,p[i].iq);

	  }
	  for(i=0;i<n;i++)
	  {
		printf("%s\t %d\t %d\n",p[i].name,p[i].id,p[i].iq);

	  }

getch();
}