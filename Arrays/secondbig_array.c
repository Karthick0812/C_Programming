//Second Biggest number in an array
#include<stdio.h>
int main()
{
	int a[8];
	int i,big1,big2,n=sizeof a/sizeof a[0];

	printf("Enter the array elements\n");

	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);


	for(i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
				break;
	}
if(i != n-1)
{

	if(a[i]>a[i+1])
	{
	big1=a[i];
	big2=a[i+1];
	}
	else
	{
		big1=a[i+1];
		big2=a[i];
	}

	for(i=i+2;i<n;i++)
	{
		if(a[i]>big1)
		{
			big2=big1;
			big1=a[i];
		}
		else if((a[i]>big2)&&(a[i]!=big1))
		big2=a[i];

	}

	printf("Biggest Number=%d \nSecond Biggest Number=%d\n",big1,big2);
}
else
printf("All are same\n");
}
