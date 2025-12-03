#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc,char *argv[])
{
	if(argc != 4)
	{
		printf("usage: a.out file word1word2\n");
		return 1;
	}

	FILE *fp = fopen(argv[1],"r");
	if(fp == NULL)
	{
		printf("file doesn't exist\n");
		return 1;
	}

	int i = 0,j,count = 0;

	while(fgetc(fp) != EOF)
		count++;

	rewind(fp);

	char ch;
	char *p = (char *)malloc(count*sizeof(char)+1);

	while((ch = fgetc(fp)) != EOF)
		p[i++] = ch;
	p[i] = '\0';
	fclose(fp);

	fp = fopen(argv[1],"w");
	char *stop;
	
	i = 0;	
	while((stop = strstr(p+i,argv[2])) != NULL)
	{
		int start = stop - p;
		int end = start + strlen(argv[2]);

		int is_start = (start == 0) || !isalnum(p[start-1]);
		int is_end = !isalnum(p[end]);

		if(is_start && is_end)
		{
			for(j = i;j < start;j++)
				fputc(p[j],fp);

			fprintf(fp,"%s",argv[3]);
			i = end;
		}
		else
		{
			fputc(p[i],fp);
			i++;
		}

	}

	for(;p[i];i++)
	fputc(p[i],fp);

	free(p);
	fclose(fp);
}
