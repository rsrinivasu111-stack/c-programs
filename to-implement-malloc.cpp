#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i;
    printf("enter n value");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter integer numbers");
    for(i=0;i<n;i++)
    {
        scanf(" %d",p+i);
    }
    return 0;
}
