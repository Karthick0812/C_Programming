//Remove spaces in given string and display it
#include<stdio.h>
int main()
{
    char a[100];
    int size,i,j=0;
    
    printf("Enter the string\n");
    scanf("%[^\n]",a);
    
    for(size=0;a[size];size++);
    for(i=0;i<size;i++)
    {
        if(a[i] != ' ')
        {
            a[j] = a[i];
            j++;
        }
    }
    a[j] = '\0';
    printf("%s\n",a);
}
