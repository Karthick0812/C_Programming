//Remove continuous spaces in string
#include<stdio.h>
int main()
{
	char a[50];
	int i,j;

	printf("Enter the string\n");
	scanf("%[^\n]",a);

	for(i=0;a[i];i++)
	{
		if((a[i]==' ')&&(a[i+1]==' '))
		{
			for(j=i;a[j];j++)
			a[j]=a[j+1];
		i--;
		}
	}
	printf("%s",a);
	printf("\n");
}
