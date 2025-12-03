//WAP to copy one array element into another array.
#include<stdio.h>
int main()
{
    int a[10],b[10],n,i;
    
    n=sizeof a/sizeof a[0];
    
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    b[i] = a[i];
    
    for(i=0;i<n;i++)
    {
   // printf("a[%d]=%d ",i,a[i]);
    printf("b=%d ",b[i]);
    }

    printf("\n");
}
