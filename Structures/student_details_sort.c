//Five students details sorting based on roll or name or marks
#include<stdio.h>
#include<string.h>

struct st{
	int roll;
	char name[20];
	float marks;
};
void scan(struct st *);
void print(struct st *);
void sort (struct st*);

int main()
{
	struct st s[5];
	scan(s);
	printf("Student details before sorting\n");
	print(s);
	sort(s);
	printf("Student details after sorting\n");
	print(s);
}
void scan(struct st *p)
{
	printf("Enter the students details\n");
	for(int i=0;i<5;i++)
		scanf("%d%s%f",&p[i].roll,p[i].name,&p[i].marks);
}
void print(struct st *v)
{
	for (int i=0;i<5;i++)
		printf("%d %s %f\n",v[i].roll,v[i].name,v[i].marks);
}
void sort (struct st * s)
{
	struct st temp;
	int i,j,n=5,op;
	printf("Enter 1)roll,2)name,3)marks\n");
	scanf("%d",&op);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(op==1)
			{
				if(s[j].roll>s[j+1].roll)
				{
					temp=s[j];
					s[j]=s[j+1];
					s[j+1]=temp;
				}
			}
			if(op==2)
                        {
                                if(strcmp(s[j].name,s[j+1].name)>0)
                                {
                                        temp=s[j];
                                        s[j]=s[j+1];
                                        s[j+1]=temp;
                                }
                        }
			if(op==3)
                        {
                                if(s[j].marks>s[j+1].marks)
                                {
                                        temp=s[j];
                                        s[j]=s[j+1];
                                        s[j+1]=temp;
                                }
                        }

		}
	}

}
