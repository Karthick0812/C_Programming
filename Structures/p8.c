#include<stdio.h>
#include<stdlib.h>

struct st{
    int x;
    int *p;
};

int main()
{
    struct st s={10,&s.x};
    struct st *p=&s;
    
    printf("&s.x=%p\n",&s.x);
    printf("x= %d p=%p\n",s.x,s.p);
    printf("x= %d p=%p\n",p->x,p->p);
    printf("*s.p=%d\n",*s.p);
    printf("x= %d p=%d\n",*p->p,*((*p).p));

}
