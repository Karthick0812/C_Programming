#include<stdio.h>
int main()

{
    int big1,big2,i,a[5]={9,8,9,0,3};
    if(a[0]>a[1])
    {
        big1=a[0];
        big2=a[1];
    }
else    {
        big1=a[1];
        big2=a[0];
    }
    for(i=2;i<5;i++)
    {
        if(big1<a[i])
        {
            big2=big1;
            big1=a[i];
        }
        else if((big2<a[i])&&(a[i]!=big1))
        {
            big2=a[i];
        }
    }
    printf("%d\n",big2);
}
