#include<stdio.h>

struct st{
	int roll;
	char name;
};

int main()
{
	struct st s[3]={{10,'A'},{20,'B'},{30,'C'}};
	for(int i=0;i<3;i++)
		printf("%d %c\n",s[i].roll,s[i].name);
}

