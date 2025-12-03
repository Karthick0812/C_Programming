#include<stdio.h>
int prime_number(int);
int main()
{
    int num,prime;
    
    printf("Enter the number\n");
    scanf("%d",&num);
    
    prime = prime_number(num);
    
    if(prime == 0)
    printf("%d is a prime number\n",num);
    else
    printf("%d is not a prime number\n",num);
}

int prime_number(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        break;
    }
    if(n==i)
    return 0;
    else
    return -1;
}
