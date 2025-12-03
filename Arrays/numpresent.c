//Write a program to enter 10 elements into an array and find the particular given element is present or not. If present display that how many no.of times the  element is present.
#include<stdio.h>
int main()
{
    int a[10],i,num,count=0;
    printf("Enter the numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value\n");
    scanf("%d",&num);
    
    for(i=0;i<10;i++)
    {
        if(num == a[i])
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("The given number is not present in the array\n");
    }
    else
        printf("The number is present and no of times the number present in the array is %d\n",count);
}
