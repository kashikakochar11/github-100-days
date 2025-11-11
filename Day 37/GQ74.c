//Find transpose
#include <stdio.h>
void main()
{
    int matrix[10][10], transpose[10][10];
    int i,j,n,m;
  
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&n,&m);
  
    printf("Enter the matrix elements\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    //Transposition
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("The transposition of the matrix:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}