#include<stdio.h>
int main()
{
	FILE *fp=fopen("data.txt","r");
	if(fp==NULL)
	{
		printf("karthick is good boy\n");
//		char ch;
//		while( ch=fgetc(fp)!=EOF)
//		printf("%c\n",ch);
	}
//	else
//		printf("karthick is very good boy\n");
		char ch;
		while((ch=fgetc(fp))!=EOF)
			printf("%c",ch);
	
}
