//Delete the character in the string
#include<stdio.h>
int main()
{
    char a[50],ch;
    int i,j=0;
    
    scanf("%s",a);
    
    scanf(" %c",&ch);
    
    for(i=0;a[i];i++)
    {
        if(a[i]!=ch)
        a[j++]=a[i];
    }
    a[j]='\0';
    
    printf("%s",a);
}

