//Count of alphabet,digits,special character in a given string
#include<stdio.h>
int main()
{
	int i,upper=0,lower=0,digit=0,special=0;
	char a[100];
	printf("Enter the string\n");
	scanf("%[^\n]",a);

	for(i=0;a[i];i++)
	{
		if((a[i]>='A')&&(a[i]<='Z'))
			upper++;
		else if((a[i]>='a')&&(a[i]<='z'))
			lower++;
		else if((a[i]>='0')&&(a[i]<='9'))
			digit++;
		else
			special++;
	}
	printf("uppercase= %d\nlowercase= %d\ndigit= %d\nspecial= %d\n",upper,lower,digit,special);
}
