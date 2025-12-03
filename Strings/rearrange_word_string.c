#include<stdio.h>
int main()
{
	char a[100];
	int i,j,k,start=0,size;

	printf("Enter the string\n");
	scanf("%[^\n]",a);

	for(size=0;a[size];size++);
	for(i=0,j=size-1;i<j;i++,j--)
	{
		char temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	printf("%s\n",a);

	for(int i=0;size>=i;i++)
	{
		if(a[i] == ' '|| a[i] == '\0')
		{
			int end = i-1;
			for(int i =start,j=end;i<j;i++,j--)
			{
				char temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			start = i+1;
		}
	}
	printf("%s\n",a);
}
