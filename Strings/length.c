//Lenth of the string
#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    int count=0,i=0;
    printf("Enter the string\n");
    scanf("%[^\n]",s);
    
    while(s[i]!='\0')
    {
        count++;
        i++;
    }
    
    printf("The length of the string %d\n",count);
    
}
