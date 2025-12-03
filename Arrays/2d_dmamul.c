//Matrix multiplication using DMA

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **a,**b,**c,i,j,k,sum,rows,col;
    printf("Enter the rows:\n");
    scanf("%d",&rows);
    printf("Enter the columns:\n");
    scanf("%d",&col);
    
    //Allocate memory for matrix a
    a = (int **)malloc(rows * sizeof(int *));
    for(i = 0;i < rows;i++)
    a[i] = (int *)malloc(col * sizeof(int));
    
    //Allocate memory for matrix b
    b = (int **)malloc(rows * sizeof(int *));
    for(i = 0;i < rows;i++)
    b[i] = (int *)malloc(col * sizeof(int));
    
    //Allocate memory for matrix c
    c = (int **)malloc(rows * sizeof(int *));
    for(i = 0;i < rows;i++)
    c[i] = (int *)malloc(col * sizeof(int));
    
    //input for matrix a
    printf("Enter the first matrix[%dx%d]\n",rows,col);
    for(i = 0;i < rows;i++)
    {
        for(j = 0;j < col;j++)
            scanf("%d",&a[i][j]);
    }
    
    //input for matrix b
    printf("Enter the second matrix[%dx%d]\n",rows,col);
    for(i = 0;i < rows;i++)
    {
        for(j = 0;j < col;j++)
            scanf("%d",&b[i][j]);
    }
    
    for(i = 0;i < rows;i++)
    {
        for(j = 0;j < col;j++)
        {
            sum = 0;
            for(k =0;k <col;k++)
            sum = sum + a[i][k] * b[k][j];
            c[i][j] = sum;
        }
    }
    
    printf("The Matrix Multiplication of both a[%dx%d] and b[%dx%d] is\n",rows,col,rows,col);
    for(i = 0;i < rows;i++)
    {
        for(j = 0;j < col;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    
    // Free the memory
    for(i =0;i < col;i++)
    {
        free(a[i]);
        free(b[i]);
        free(c[i]);
    }
    free(a);
    free(b);
    free(c);
    
}
