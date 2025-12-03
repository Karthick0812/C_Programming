//Right Half Pyramid
#include <stdio.h>

int main()
{
  int i,j,n,num=1;
  char ch;
  printf("Enter the number:");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
      for(j=0;j<i+1;j++)
      printf("* ");
      printf("\n");
  }

  for(i=0;i<n;i++)
  {
      for(j=0;j<i+1;j++)
      {
          ch='A'+ j;
          printf("%c ",ch);

      }
      printf("\n");
  }

  for(i=0;i<n;i++)
  {
      for(j=0;j<i+1;j++)
      printf("%d ",j+1);
      printf("\n");
  }

  for(i=0;i<n;i++) //Floyd's Triangle
  {
      for(j=0;j<i+1;j++)
      printf("%d ",num++);
      printf("\n");
  }

}
