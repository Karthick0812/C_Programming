#include<stdio.h>

int main(int argc,char *argv[])
{
	FILE *fp=fopen(argv[1],"r");
	FILE *fq=fopen(argv[2],"w");

	char ch;
	while((ch=fgetc(fp))!=EOF)
		fputc(ch,fq);
}
