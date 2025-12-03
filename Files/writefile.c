#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *fp=fopen(argv[1],"w");
	if(fp==NULL)
	{
		printf("karthick is good boy\n");
	}

	char ch[]="Karthick is very good boy but \nSanjay is good bot\n";
	int i=0;
	while(ch[i])
		fputc(ch[i++],fp);
}
