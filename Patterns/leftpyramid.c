#include<stdio.h>
int main()
{
	int i,j,k,rows = 5,num = 1;
	char ch;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<2*(rows-i)-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=0; i < rows;i++)
        {
		for(j=0;j<2*(rows-i)-1;j++)
		{
			printf(" ");
		}
       		for(k=0;k<=i;k++)
       		{
           		printf("%d ",k+1);
		}
        printf("\n");

   	}
	for(i=0; i < rows;i++)
        {
		for(j=0;j<2*(rows-i)-1;j++)
		{
			printf(" ");
		}
    	 	for(k=0;k<=i;k++)
       		{
           		ch = 'A'+k;
                        printf("%c ",ch);
       		}
        printf("\n");

    }
	for(i=0; i < rows;i++)
        {
                for(j=0;j<2*(rows-i)-1;j++)
                {
                        printf(" ");
                }
                for(k=0;k<=i;k++)
                {
                        printf("%d ",num++);
                }
        printf("\n");

    }

}
