#include<stdio.h>
int main()
{
    char a[50],b[50];
    int i;
    printf("Enter the string\n");
    scanf("%[^\n]",a);
    
    for(i=0;b[i]=a[i];i++);

    printf("source--->%s\n",a);
    printf("destination--->%s\n",b);
    
}
