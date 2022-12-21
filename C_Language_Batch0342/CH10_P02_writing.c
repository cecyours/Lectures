
#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char data[100];

	fp = fopen("zzz.txt","w");

	printf("Enter data for file [press -1 to exit] : ");
	
	while(1)// 
	{
		scanf("%s",data);
		
		if(strcmp(data,"-1")==0)
		{
			break;
		}
		fprintf(fp, "%s ",data);
	}	
	printf("file operation done\n");
	
	fclose(fp);

}