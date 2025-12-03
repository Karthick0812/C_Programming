//WAP to design the functions scan() and print() to scan and print the struct variable data.
#include <stdio.h>

struct st
{
	int roll;
	char name[20];
	float marks;
};

void scan(struct st *);
void print(struct st);

int main()
{
	struct st v;
	scan(&v);
	print(v);
}

void scan(struct st *s)
{
	scanf("%d %s %f",&s->roll,s->name,&s->marks);


}

void print(struct st t)
{
	printf("%d %s %f\n",t.roll,t.name,t.marks);
	printf("\n");
}

