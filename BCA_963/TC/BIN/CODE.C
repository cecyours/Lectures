
void main()
{
int a,b;
      clrscr();
      //	     printf("Hello WOrld");
      printf("Enter expression [a+b]: ");
      scanf("%d+%d",&a,&b);
      printf("%d + %d = %d\n",a,b,a+b);


      printf("Enter expression [a-b]: ");
      scanf("%d-%d",&a,&b);
      printf("%d - %d = %d\n",a,b,a-b);

      printf("Enter expression [a*b]: ");
      scanf("%d*%d",&a,&b);
      printf("%d * %d = %d\n",a,b,a*b);

      printf("Enter expression [a/b]: ");
      scanf("%d/%d",&a,&b);
      printf("%d / %d = %d\n",a,b,a/b);

      printf("Enter expression [a%%b]: ");
      scanf("%d%%%d",&a,&b);
      printf("%d %% %d = %d\n",a,b,a+b);


      getch();
}