#include <stdio.h>
int main()
{
    char a[100];
    printf("Enter the string\n");
    scanf("%s",a);
    int i, j;

    for(j = 0; a[j]; j++);

    for(i = 0,j = j - 1; i < j; i++, j--)
    {
        if(a[i] != a[j])
            break;
    }
    if(i >=j)
        printf("palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}

