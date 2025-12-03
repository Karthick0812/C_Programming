//Concentae of two string
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    printf("Enter the string\n");
    scanf("%[^\n]",s1);
    printf("\n");
    printf("Enter the string\n");
    scanf(" %[^\n]",s2);
    
    strcat(s1,s2);
    printf("%s",s1);
    
}
