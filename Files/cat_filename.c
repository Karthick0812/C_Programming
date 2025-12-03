#include<stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("usage: a.out filename\n");
		return 1;
	}
	char line[1000];

	FILE *fp = fopen(argv[1],"w");

	printf("Enter the text: (Ctrl + D to save and exit)\n");
	while(fgets(line,sizeof(line),stdin))
			fputs(line,fp);

	fclose(fp);

	printf("Content written to the %s\n",argv[1]);


}
