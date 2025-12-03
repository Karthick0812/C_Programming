//No of times given character is located in given string
#include<stdio.h>
int main()
{
    char a[100],ch;
    int i,count=0,j;
    
    printf("Enter the string\n");
    scanf("%[^\n]",a);
    
    printf("Enter the character\n");
    scanf(" %c",&ch);
    
    for(i=0;a[i];i++);
    for(j=0;j<i;j++)
    {
        if(a[j]==ch)
        count++;
    }
    printf("%c--->%d times\n`",ch,count);
    
}
