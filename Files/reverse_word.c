//Write a program to reverse the particular given string in a given file.
//Note : Use fseek() and r+ mode to opens the file.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
	if(argc != 3)
	{
		printf("usage: a.out file word\n");
		return 1;
	}

	FILE *fp = fopen(argv[1],"r+");

	if(fp == NULL)
	{
		printf("file doesn't exist\n");
		return 1;
	}


}

