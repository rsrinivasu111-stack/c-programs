#include<stdio.h>
void div(int,int);
int main()
{
    int a,b;
    printf("enter a,b values");
    scanf("%d%d",&a,&b);
    div(a,b);
    return 0;
}
void div(int a,int b)
{
    printf("division is = %d",a/b);
}
