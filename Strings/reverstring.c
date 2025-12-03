#include<stdio.h>
int main()
{
    char a[100];
    int i,j,temp;

    printf("Enter the string\n");
    scanf("%s",a);
    
    for(i=0;a[i];i++);
    for(j=0,i=i-1;j<i;j++,i--)
    {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
    printf("%s\n",a);
 }
