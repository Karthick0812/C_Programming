#include<stdio.h>
#include<stdlib.h>

struct st{
    int x;
    int *p;
};

int main()
{
    struct st s={10,&s.x};
    
    printf("&s.x=%p\n",&s.x);
    printf("x= %d p=%p\n",s.x,s.p);
    printf("*s.p=%d\n",*s.p);
}
