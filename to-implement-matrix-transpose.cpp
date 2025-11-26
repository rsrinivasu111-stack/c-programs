#include<stdio.h>
int main()
{
    int A[10][10],i,j,r,c;
    printf("enter A matrix rows ,columns sizes");
    scanf("%d%d",&r,&c);
    printf("enter A matrix values");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Transpose matrix is : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf(" %d",A[j][i]);
        }
        printf("\n");
    }
    return 0;
}
