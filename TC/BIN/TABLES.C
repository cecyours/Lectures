
void main()
{

	int start,end,i,n;
clrscr();
	 printf("Enter 2 numbers as start,end : ");
	 scanf("%d,%d",&start,&end);

	 printf("start : %d\t end : %d\n",start,end);

	 for(n=start;n<=end;n++)
	 {
		for(i=1;i<=10;i++)
		{
			printf("%d x %d = %d\n",n,i,n*i);
		}
		printf("\n");
	 }
getch();
	return;
}