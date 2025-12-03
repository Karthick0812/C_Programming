#include<stdio.h>
int main()
{
        int a[10]={1,2,3,4,5,6,7,8,9,0};
        int i,num,index,ele;
        ele=sizeof a/sizeof a[0];
	
	for(i=0;i<ele;i++)
        printf("%d ",a[i]);
	printf("\n");

        printf("Enter the index\n");
        scanf("%d",&index);
        
	printf("Enter the number\n");
        scanf("%d",&num);
        
	for(i=ele-2;i>=index;i--)
        a[i+1]=a[i];
        a[index]=num;
        
        for(i=0;i<ele;i++)
        printf("%d ",a[i]);
	printf("\n");

}

