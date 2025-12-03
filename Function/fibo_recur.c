#include<stdio.h>
void fibo(int,int,int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    fibo(n,0,1);
}
void fibo(int n,int a,int b)
{
    int c;
    if(a<=n)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        fibo(n,a,b);
    }
}
