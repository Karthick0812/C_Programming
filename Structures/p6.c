#include<stdio.h>
struct st
{
        int x;
        char ch;
};
int main()
{
        struct st v = {10,'A'};
        struct st *p = &v;
        printf("%d  %c\n",p->x,p->ch);
           printf(“%d %c\n”,(*p).x,(*p).ch);
}

