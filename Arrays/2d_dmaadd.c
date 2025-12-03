#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,**b,**c,rows,col,i,j;
    
    printf("Enter the rows and columns\n");
    scanf("%d %d",&rows,&col);
    
    //Allocate memory for matrix A
    a=(int **)malloc(rows*sizeof(int *));
    
    for(i=0;i<rows;i++)
        a[i]=(int *)malloc(col*sizeof(int));
    
    //Allocate memory for matrix B
    b=(int **)malloc(rows*sizeof(int *));
    
    for(i=0;i<rows;i++)
        b[i]=(int *)malloc(col*sizeof(int));
    
    //Allocate memory for matrix C
    c=(int **)malloc(rows*sizeof(int *));
    
    for(i=0;i<rows;i++)
        c[i]=(int *)malloc(col*sizeof(int));
    
    //Input for matrix a
    printf("Enter the first 2D array\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        scanf("%d",&a[i][j]);
    }

    //Input for matrix b
    printf("Enter the first 2D array\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        scanf("%d",&b[i][j]);
    }

    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        c[i][j] = a[i][j]+b[i][j];

    }

    printf("The addition of the both matrix is\n");

    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
    
    //Deallocating the memory
    for(i=0;i<col;i++)
    {
        free(a[i]);
        free(b[i]);
        free(c[i]);
    }
    free(a);
    free(b);
    free(c);

}
