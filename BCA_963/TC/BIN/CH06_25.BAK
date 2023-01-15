#include<stdio.h>
#include<conio.h>
#include<string.h> // for strcmp()
void main()
{
   char words[20][100],temp[100];
   int i,j,n;
clrscr();
   printf("Enter no of words : ");
   scanf("%d",&n);
   printf("Enter those words ... \n");
	for(i=0;i<n;i++)
	{
		printf("Enter a word : ");
		scanf("%s",words[i]);
	}
	// sort logic
	 for(i=0;i<n;i++)
	 {
	     for(j=i+1;j<n;j++) // i+1,target next one in array
	     {
		      if(strcmp(words[i],words[j]) > 0)
		      {
			      strcpy(temp,words[i]);
			      strcpy(words[i],words[j]);
			      strcpy(words[j],temp);
		      }
	     }
	 }

	 printf("\nSorted list : \n");
	 for(i=0;i<n;i++)
		printf("%s\n",words[i]);
getch();
}