//Moves zeros to the end
#include<stdio.h>
int main()
{
    int a[]={10,0,34,5,6,0,87,6,0};
    int i,j=0,n;
    
    n=sizeof a/sizeof a[0];
    
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
        a[j]=a[i];
        j++;
        }
    }   
        while(j<n)
        {
            a[j]=0;
            j++;
        }
    
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
}
