#include<stdio.h>
int main()
{
    char a[100];
    int size,i,j,start=0,end,temp,k;

    printf("Enter the string\n");
    scanf("%[^\n]",a);

    for(size=0;a[size];size++);
    for(i=0;size>=i;i++)
    {
        if(a[i]==' '|| a[i]==0)
        {
            end=i-1;
            for(j=start,k=end;j<k;j++,k--)
            {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
            start=i+1;
        }
    }
  /* for(i=start,j=size-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }*/
    printf("%s\n",a);
}
/*#include<stdio.h>
int main()
{
    char a[100];
    int i,start=0,end;
    char temp;
    
    printf("Enter the string\n");
    scanf("%[^\n]",a);
    
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]==' ')||(a[i+1]=='\0'))
        {
            if(a[i+1]=='\0'&&a[i]!=' ')
            end=i;
            else
            end=i-1;
            
            int s,e;
            for(s=start,e=end;s<e;s++,e--)
            {
                 temp=a[s];
                 a[s]=a[e];
                 a[e]=temp;
             }
                   start=i+1;
        }
    }
    printf("%s",a);
}*/
