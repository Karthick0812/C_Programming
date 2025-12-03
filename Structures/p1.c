#include<stdio.h>

struct st
{
	int roll;
	char name[20];
	float marks;
};

void fun(struct st);

int main()
{
	struct st v;
	fun (v);
}

void fun(struct st b)
{
	scanf("%d %s %f",&b.roll,b.name,&b.marks);
	printf("%d %s %f\n",b.roll,b.name,b.marks);
}
