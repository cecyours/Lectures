
void main()
{
	int a[100];
	int i,j,temp,m;
clrscr();
	printf("Enter the size : ");
	scanf("%d",&m);

	printf("Enter the arry : \n");
	for(i=0;i<m;i++);
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	//
		for(i=0;i<m;i++)
		{
			for(j=i;j<m;j++)
			{
				if(a[i]>a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}


	  //

	  printf("\n______________________\n");
	  for(i=0;i<m;i++)
	  {
		printf("a[%d] = %d\n",i,a[i]);
	  }
getch();
}

















