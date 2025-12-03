//Biggest number in an array
#include<stdio.h>
int main()
{
    int a[15];
    int big1,n = sizeof a/sizeof a[0];

    printf("Enter the numbers\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

    big1=a[0];
    for(int i=1;i<15;i++)
    {
        if(a[i]>big1)
        big1 = a[i];
    }
    printf("Biggest number= %d",big1);
}
